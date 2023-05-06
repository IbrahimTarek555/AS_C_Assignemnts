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

/*A function to delete an element from a linked list*/
Node_dt *DeleteFromLinkedList(Node_dt *StartAddress, int DeletedElement);


/*It is the main*/
int main()
{
	int LinkedListSize, InsertionNumber;
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
	
	/*Delete a node from linked list*/
	printf("Enter a number to you want to delete: ");
	scanf("%d", &InsertionNumber);
	StartAddress = DeleteFromLinkedList(StartAddress, InsertionNumber);
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

Node_dt *DeleteFromLinkedList(Node_dt *StartAddress, int DeletedElement)
{
	/*Define variables*/
	Node_dt *TempPtr = StartAddress;
	int DeletedIndex = 0;
	
	/*Validate linked list start address*/
	if(StartAddress == NULL)
	{
		printf("DeleteFromLinkedList: Linked List is empty!\n");
	}
	else 
	{
		/*Search for the deleted element into the linked list*/
		while(TempPtr != NULL)
		{
			/*Increment the deleted node index*/
			DeletedIndex++;
			
			if(TempPtr -> Info == DeletedElement)
			{
				break;
			}
			else 
			{
				TempPtr = TempPtr -> Next;
			}
		}
		
		/*Why the loop had been breaked*/
		if(TempPtr == NULL)
		{
			printf("DeleteFromLinkedList: The Element you entered is not exist!\n");
		}
		
		/*The node is exist and we should delete it*/
		else
		{
			/*The node is the only node*/
			if((DeletedIndex == 1) && (TempPtr -> Next == NULL))
			{
				StartAddress = NULL;
				free(TempPtr);
			}
			/*The node is the first node only*/
			else if(DeletedIndex == 1)
			{
				TempPtr -> Next -> Previous = NULL;
				StartAddress = TempPtr -> Next;
				free(TempPtr);
			}
			/*The node is the last node*/
			else if((TempPtr -> Previous != NULL) && (TempPtr -> Next == NULL))
			{
				TempPtr -> Previous -> Next = NULL;
				free(TempPtr);
			}
			/*The node in between elements*/
			else
			{
				TempPtr -> Previous -> Next = TempPtr -> Next;
				TempPtr -> Next -> Previous = TempPtr -> Previous;
				free(TempPtr);
			}
		}
	}
	
	/*Return linked list start address*/
	return StartAddress;
}

