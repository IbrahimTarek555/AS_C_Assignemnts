#include <stdio.h>
#include <stdlib.h>

/*New struct type definition*/
typedef struct Node
{
	int Info;
	struct Node *Next;
	struct Node *Previous;
}Node_dt;

/*Functions' prototypes*/
/*A function to reserve a doubley linked list with Size elements and return the first element Adress*/
Node_dt *CreateDoubleyLinkedList(int Size);
/*A function to display a linked list*/
void DisplayDoubleyLinkedList(Node_dt *StartAddress);
/*A function to scan a linked list*/
void ScanDoubleyLinkedList(Node_dt *StartAddress);

/*A function to insert a node before a node*/
Node_dt *InsertBeforeNode(Node_dt *StartAddress, int NodeValue, int InsertionNumber);


/*It is the main*/
int main()
{
	int LinkedListSize, NodeValue, InsertionNumber;
	Node_dt *StartAddress = NULL;
	
	/*Scanning the length of the linked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	
	/*Calling a function to reserve a linked list with Size elements and return the first element Adress*/
	StartAddress = CreateDoubleyLinkedList(LinkedListSize);
	
	/*Scanning the linked list*/
	ScanDoubleyLinkedList(StartAddress);
	
	/*Displaying the linked list*/
	DisplayDoubleyLinkedList(StartAddress);
	
	/*Insert a node before a node*/
	printf("Enter a number to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Enter a number to insert before: ");
	scanf("%d", &NodeValue);
	StartAddress = InsertBeforeNode(StartAddress, NodeValue, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Returning to the operating system*/
	return 0;

}


/*Functions' Implementations*/

Node_dt *CreateDoubleyLinkedList(int Size)
{
	/*Define variables*/
	int i;
	Node_dt *StartAddress = NULL;
	Node_dt *TempPtr = NULL;
	
	/*Validating the size*/
	if(Size < 1)
	{
		/*Do not do anything*/
	}
	else
	{
		/*Reserve the first element of linked list*/
		TempPtr = (Node_dt *) malloc(sizeof(Node_dt));
		TempPtr -> Previous = NULL; 
		TempPtr -> Next = NULL;
		
		StartAddress = TempPtr;
	
		/*Reserve the remaining elements of the linked list*/
		for(i = 1; i < Size; i++)
		{
			TempPtr -> Next = (Node_dt *) malloc(sizeof(Node_dt));
			TempPtr -> Next -> Previous = TempPtr;
			TempPtr = TempPtr -> Next;
		}
	
		/*making the last element point to NULL*/
		TempPtr -> Next = NULL;
	}
		
	/*Return the start address of the linked list*/
	return StartAddress;
}

void DisplayDoubleyLinkedList(Node_dt *StartAddress)
{
	/*Define variables*/
	Node_dt *TempPtr = StartAddress;
	
	/*Validate the linked list start address*/
	if(StartAddress == NULL)
	{
		printf("DisplayDoubleyLinkedList: Linked List is empty!\n");
	}
	else
	{
		/*Print a message to the user*/
		printf("The doubley linked list members are: ");
		
		/*Pass over all the linked list elements and print them*/
		while(TempPtr != NULL)
		{
			printf("%d\t", TempPtr -> Info);
			
			/*move the TempPtr to the next element*/
			TempPtr = TempPtr -> Next;
		}
		
		/*Print new line*/
		printf("\n");		
	}
}

void ScanDoubleyLinkedList(Node_dt *StartAddress)
{
	/*Define variables*/
	Node_dt *TempPtr = StartAddress;
	int i = 1; 
	
	/*Validate the linked list start address*/
	if(StartAddress == NULL)
	{
		printf("ScanDoubleyLinkedList: Linked List has no members!\n");
	}
	else
	{
		/*Pass over all the linked list elements and scan them*/
		while(TempPtr != NULL)
		{
			printf("Enter element %d of the linked list: ", i);
			scanf("%d", &(TempPtr -> Info));
			
			/*move to the next element*/
			TempPtr = TempPtr -> Next;
			
			/*Increment the iterator*/
			i++;
		}
	}
}

Node_dt *InsertBeforeNode(Node_dt *StartAddress, int NodeValue, int InsertionNumber)
{
	/*Define Variables*/
	Node_dt *NewElement = NULL;
	Node_dt *TempPtr = StartAddress;
	int IfFirst = 1;
	
	/*Validate StartAddress*/
	if(StartAddress == NULL)
	{
		printf("InsertBeforeNode: Linked List is empty!\n");
	}
	else
	{
		/*Search for the Node to insert after*/
		while(TempPtr != NULL)
		{
			if(TempPtr -> Info == NodeValue)
			{
				break;
			}
			else
			{
				/*Reset the IfFirst Flag*/
				IfFirst = 0;
				
				/*Move to the next element*/
				TempPtr = TempPtr -> Next;
			}
		}
		
		/*Why the loop had been breaked*/
		if(TempPtr == NULL)
		{
			printf("InsertBeforeNode: The node does not exist!\n");
		}
		else
		{
			/*Reserve new element and insert it before the node*/
			NewElement = (Node_dt *) malloc(sizeof(Node_dt));
			NewElement -> Info = InsertionNumber;
			NewElement -> Next = TempPtr;
			NewElement -> Previous = TempPtr -> Previous;
			
			/*Difference in inserting due to IfFirst*/
			if(IfFirst == 1)
			{
				TempPtr -> Previous = NewElement;
				StartAddress = NewElement;
			}
			else
			{
				TempPtr -> Previous -> Next = NewElement;
				TempPtr -> Previous = NewElement;								
			}
		}
	}
	
	/*Return StartAddress*/
	return StartAddress;
}

