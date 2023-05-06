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

/*A function to insert an element at an empty linked list*/
Node_ct *InsertAtEmptyCircular(Node_ct *LastAddress, int InsertionNumber);

/*It is the main*/
int main()
{
	/*Defining variables*/
	int LinkedListSize, InsertionNumber;
	Node_ct *LastAddress = NULL;
	
	/*Scanning the length of the linked list from the user*/
	printf("NOTE: ENTER 1 SO THE PROGRAM GO SUCCESSFUL.\n");
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	
	/*Calling a function to reserve a linked list with Size elements and return the last element Adress*/
	LastAddress = CreateCircularLinkedList(LinkedListSize);
	
	/*Scanning the linked list*/
	ScanCircularLinkedList(LastAddress);
	
	/*Displaying the linked list*/
	DisplayCircularLinkedList(LastAddress);
	
	/*insert a number at beginning of linked list*/
	printf("Please, Enter a number to insert at embty linked list: ");
	scanf("%d", &InsertionNumber);
	LastAddress = InsertAtEmptyCircular(LastAddress, InsertionNumber);
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

Node_ct *InsertAtEmptyCircular(Node_ct *LastAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_ct *NewElement = NULL;
	
	/*Validate linked list Last address*/
	if(LastAddress != NULL)
	{
		printf("InsertAtEmptyCircular: This linked list is not an empty linked list!\n");
	}
	else
	{
		/*Reserve new element and insert it into the empty linked list*/
		NewElement = (Node_ct *) malloc(sizeof(Node_ct));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = NewElement;
		LastAddress = NewElement;
	}
	
	/*Return LastAddress*/
	return LastAddress;
}
