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

/*A function to reverse a Doubley linked list*/
Node_dt *ReverseDoubleyLinkedList(Node_dt *StartAddress);


/*It is the main*/
int main()
{
	int LinkedListSize;
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
	
	/*Reversing the linked list*/
	StartAddress = ReverseDoubleyLinkedList(StartAddress);
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

Node_dt *ReverseDoubleyLinkedList(Node_dt *StartAddress)
{
	Node_dt *TempPtr = StartAddress;
	Node_dt *Temp;
	/*validate linked list start address*/
	if(StartAddress == NULL)
	{
		printf("ReverseDoubleyLinkedList: Linked List is empty!\n");
	}
	else
	{
		/*Pass over all the elements and reverse them*/
		while(TempPtr != NULL)
		{
			Temp = TempPtr -> Next;
			TempPtr -> Next = TempPtr -> Previous;
			TempPtr -> Previous = Temp;
			
			/*Moving TempPtr to the next element*/
			TempPtr = TempPtr -> Previous;
			
			/*Update StartAddress*/
			if(TempPtr != NULL)
			{
				StartAddress = TempPtr;	
			}
		}
		
	}
	
	/*Return linked list start address*/
	return StartAddress;
}
