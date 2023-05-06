#include <stdio.h>
#include <stdlib.h>

/*New struct type definition*/
typedef struct Node
{
	int Info;
	struct Node *Link;
}Node_ct;

/*Functions' prototypes*/
/*A function to reserve a circular linked list with Size elements and return the last element Adress*/
Node_ct *CreateCircularLinkedList(int Size);
/*A function to display a linked list*/
void DisplayCircularLinkedList(Node_ct *LastAddress);
/*A function to scan a linked list*/
void ScanCircularLinkedList(Node_ct *LastAddress);

/*A function to insert a node after a node*/
Node_ct *InsertAfterNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber);

/*It is the main*/
int main()
{
	/*Defining variables*/
	int LinkedListSize, InsertionNumber, NodeValue;
	Node_ct *LastAddress = NULL;
	
	/*Scanning the length of the linked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	
	/*Calling a function to reserve a linked list with Size elements and return the last element Adress*/
	LastAddress = CreateCircularLinkedList(LinkedListSize);
	
	/*Scanning the linked list*/
	ScanCircularLinkedList(LastAddress);
	
	/*Displaying the linked list*/
	DisplayCircularLinkedList(LastAddress);
	
	/*insert a number after a node*/
	printf("Please, Enter a number to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Please, Enter a number to insert after: ");
	scanf("%d", &NodeValue);
	LastAddress = InsertAfterNodeCircular(LastAddress, NodeValue, InsertionNumber);
	DisplayCircularLinkedList(LastAddress);

	/*Returning to the operating system*/
	return 0;

}


/*Functions' Implementations*/

Node_ct *CreateCircularLinkedList(int Size)
{
	/*Define variables*/
	int i;
	Node_ct *LastAddress = NULL;
	Node_ct *TempPtr = NULL;
	
	/*Validating the size*/
	if(Size < 1)
	{
		/*Do not do anything*/
	}
	else
	{
		/*Reserve the first element of linked list*/
		TempPtr = (Node_ct *) malloc(sizeof(Node_ct));
		TempPtr -> Link = TempPtr; 
		
		LastAddress = TempPtr;
	
		/*Reserve the remaining elements of the linked list*/
		for(i = 1; i < Size; i++)
		{
			TempPtr = (Node_ct *) malloc(sizeof(Node_ct));
			TempPtr -> Link = LastAddress -> Link;
			LastAddress -> Link = TempPtr;
		}
	}
		
	/*Return the Last address of the linked list*/
	return LastAddress;
}

void DisplayCircularLinkedList(Node_ct *LastAddress)
{
	/*Define variables*/
	Node_ct *TempPtr = NULL;
	
	/*Validate the linked list start address*/
	if(LastAddress == NULL)
	{
		printf("DisplayCircularLinkedList: Linked List is empty!\n");
	}
	else
	{
		/*Make TempPtr points to the first element*/
		TempPtr = LastAddress -> Link;
		
		/*Print a message to the user*/
		printf("The Circular linked list members are: ");
		
		/*Pass over all the linked list elements and print them*/
		do
		{
			printf("%d\t", TempPtr -> Info);

			/*move the TempPtr to the next element*/
			TempPtr = TempPtr -> Link;
			
		}
		while(TempPtr != LastAddress -> Link);
		
		/*Print new line*/
		printf("\n");		
	}
}

void ScanCircularLinkedList(Node_ct *LastAddress)
{
	/*Define variables*/
	Node_ct *TempPtr = NULL;
	int i = 1; 
	
	/*Validate the linked list start address*/
	if(LastAddress == NULL)
	{
		printf("ScanCircularLinkedList: Linked List has no members!\n");
	}
	else
	{
		/*Make TempPtr point to the first element*/
		TempPtr = LastAddress -> Link;
		
		/*Pass over all the linked list elements and scan them*/
		do
		{
			printf("Enter element %d of the linked list: ", i);
			scanf("%d", &(TempPtr -> Info));
			
			/*move to the next element*/
			TempPtr = TempPtr -> Link;
			
			/*Increment the iterator*/
			i++;
		}while(TempPtr != LastAddress -> Link);
	}
}

Node_ct *InsertAfterNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber)
{
	/*Define Variables*/
	Node_ct *NewElement = NULL;
	Node_ct *TempPtr = NULL;
	int IfLast = 0;
	int IfFirst = 1;
	
	/*Validate LastAddress*/
	if(LastAddress == NULL)
	{
		printf("InsertAfterNodeCircular: Linked List is empty!\n");
	}
	else
	{
		/*Make TempPtr point to the first element*/
		TempPtr = LastAddress -> Link;
		
		/*Search for the Node to insert after*/
		do
		{
			if(TempPtr -> Info == NodeValue)
			{
				break;
			}
			else
			{
				IfFirst = 0;
				TempPtr = TempPtr -> Link;
			}
		}
		while(TempPtr != LastAddress -> Link);
		
		/*Why the loop had been breaked*/
		if((TempPtr == LastAddress -> Link) && (IfFirst == 0))
		{
			printf("InsertAfterNodeCircular: The node does not exist!\n");
		}
		else
		{
			if(TempPtr == LastAddress)
			{
				IfLast = 1;
			}
			
			/*Reserve new element and insert it after the node*/
			NewElement = (Node_ct *) malloc(sizeof(Node_ct));
			NewElement -> Info = InsertionNumber;
			NewElement -> Link = TempPtr -> Link;
			TempPtr -> Link = NewElement;
			
			/*Difference in inserting due to IfLast*/
			if(IfLast == 1)
			{
				LastAddress = NewElement;
			}
		}
	}
	
	/*Return LastAddress*/
	return LastAddress;
}
