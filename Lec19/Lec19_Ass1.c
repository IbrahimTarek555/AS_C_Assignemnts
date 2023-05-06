#include <stdio.h>
#include <stdlib.h>

/*New struct type definintion*/
typedef struct Node
{
	int Info;
	struct Node *Link;
}Node_t;

/*Functions' Prototypes*/
/*A function to insert a node at a given position*/
Node_t *InsertAtPosition(Node_t *StartAddress, int NodeIndex, int InsertionNumber);
/*A function to reserve a linked list with Size elements and return the first element Adress*/
Node_t *CreateLinkedList(int Size);
/*A function to display a linked list*/
void DisplayLinkedList(Node_t *StartAddress);
/*A function to scan a linked list*/
void ScanLinkedList(Node_t *StartAddress);

/*This is the main*/
int main()
{
	/*Defining Variables*/
	int LinkedListSize, InsertionNumber, NumberPosition;
	
	/*Scan linke list size from the user*/
	printf("Enter the length of linked list: ");
	scanf("%d", &LinkedListSize);

	/*Create New Linked List*/
	Node_t *Linked = CreateLinkedList(LinkedListSize);
	
	/*Scan Linked List values*/
	ScanLinkedList(Linked);
	
	/*Display Linked List*/
	DisplayLinkedList(Linked);
		
	/*Insert At Particular Position and test its function*/
	printf("Enter the Number you want to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Enter the position: ");
	scanf("%d", &NumberPosition);
	Linked = InsertAtPosition(Linked, NumberPosition, InsertionNumber);
	DisplayLinkedList(Linked);


	return 0;
}
	
Node_t* CreateLinkedList(int Size)
{
	/*Defining variables*/
	int i;
	Node_t *StartAddress = NULL, *TempPtr = NULL, *NewElement = NULL;
	
	/*Validating the size*/
	if(Size < 1)
	{
		/*Don't complete the function*/
		return StartAddress;
	}
	
	/*Reserving the first node in the linked list, then assigning its link to NULL*/
	StartAddress = (Node_t *) malloc(sizeof(Node_t));
	StartAddress -> Link = NULL;
	
	/*Assigning TempPtr to the StartAddress, then working with TempPtr so we don't miss the StartAddress*/
	TempPtr = StartAddress;
	
	for(i = 1; i < Size; i++)
	{
		/*Reserving a new node element, then assigning its link to NULL*/
		NewElement = (Node_t *) malloc(sizeof(Node_t));
		NewElement -> Link = NULL;
		
		/*Making the previous element point to the new element*/
		TempPtr -> Link = NewElement;
		
		/*Moving the TempPtr to the last element on the linked list*/
		TempPtr = NewElement;
	}
	
	return StartAddress;
}

void DisplayLinkedList(Node_t *StartAddress)
{
	/*Defining variables*/
	Node_t *TempPtr = StartAddress;
	
	/*Validating the linked list start adress*/
	if(StartAddress == NULL)
	{
		printf("The linked list is empty!\n");
	}
	else
	{
		/*Printing a message to the user*/
		printf("The linked list members are: ");
		
		/*Looping over the linked list elements*/
		while(TempPtr != NULL)
		{
			/*Printing the info of the element*/
			printf("%d\t", TempPtr -> Info);
		
			/*Moving the TempPtr to the next element of the linked list*/
			TempPtr = TempPtr -> Link;
		}
		
		/*Printing a new line*/
		printf("\n");
	}
}

void ScanLinkedList(Node_t *StartAddress)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAddress;
	int i = 1;
	
	/*Validating the linked list start adress*/
	if(StartAddress == NULL)
	{
		return;
	}

	/*Looping over the linked list elements*/
	while(TempPtr != NULL)
	{
		/*Scanning the elment value from the user*/
		printf("Please enter element %d of the linked list: ", i);
		scanf("%d", &TempPtr->Info);
		
		/*Moving the TempPtr to the next element of the linked list*/
		TempPtr = TempPtr -> Link;
		
		/*Incrementing the iterator*/
		i++;
	}

}

Node_t *InsertAtPosition(Node_t *StartAddress, int NodeIndex, int InsertionNumber)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAddress, *NewElement = NULL;
	int i, IfFirst;

	/*Validating the linked list adress*/
	if(StartAddress == NULL)
	{
		printf("The list is empty\n");
	}
	
	/*Validating the node index*/
	else if(NodeIndex < 1)
	{
		printf("Position %d is not correct!\n", NodeIndex);
	}
	
	else 
	{
		/*Descovering if it is the first node or not*/
		if(NodeIndex == 1)
		{
			printf("It is the first node.\n");
			IfFirst = 1;
		}	
		else 
		{
			IfFirst = 0;
		}
		
		/*Moving to the previous node of the node on the linked list*/
		for(i = 1; i < (NodeIndex - 1); i++)
		{
			if(TempPtr == NULL)
			{
				/*The node does not exist*/
				printf("Position %d does not exist!\n", NodeIndex);
				break;
			}
			
			/*Moving the pointer to the next element*/
			TempPtr = TempPtr -> Link;
		}
		
		
		/*Reserving new node and inserting it through the linked list*/
		if(TempPtr != NULL)
		{
			NewElement = (Node_t *) malloc(sizeof(Node_t));
			NewElement -> Info = InsertionNumber;
			
			if(IfFirst == 1)
			{
				NewElement -> Link = TempPtr;
				StartAddress = NewElement;
			}
			else
			{
				NewElement -> Link = TempPtr -> Link;
				TempPtr -> Link = NewElement;		
			}
		}
	}
	
	/*Returning the Start Adress*/
	return StartAddress;
}
