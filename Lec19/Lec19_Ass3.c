#include <stdio.h>
#include <stdlib.h>

/*New struct type definintion*/
typedef struct Node
{
	int Info;
	struct Node *Link;
}Node_t;

/*Functions' Prototypes*/
/*A function to return the middle element value of a single linked list*/
int LinkedListMidData(Node_t *StartAddress);
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
	int LinkedListSize, InsertionNumber, NumberPosition, MidData;
	
	/*Scan linke list size from the user*/
	printf("Enter the length of linked list: ");
	scanf("%d", &LinkedListSize);

	/*Create New Linked List*/
	Node_t *Linked = CreateLinkedList(LinkedListSize);
	
	/*Scan Linked List values*/
	ScanLinkedList(Linked);
	
	/*Display Linked List*/
	DisplayLinkedList(Linked);
		
	/*Extract the middle element data*/
	MidData = LinkedListMidData(Linked);
	printf("The middle element is: %d", MidData);

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

int LinkedListMidData(Node_t *StartAddress)
{
	Node_t *Ptr = StartAddress;
	int LinkedListSize = 0, MidIndex = 0;
	int Even1, Even2;
	int Odd, MidData;
	
	/*Validate the Linked List Address*/
	if(StartAddress == NULL)
	{
		/*Don't do any thing*/
	}
	else
	{
		/*Count the nodes of the linked list*/
		while(Ptr != NULL)
		{
			LinkedListSize++;
			Ptr = Ptr -> Link;
		}
		
		/*Update Ptr pointer*/
		Ptr = StartAddress;
		
		/*Know if the size is even or odd number*/		
		if((LinkedListSize % 2) == 0)
		{
			/*Reach the middle of linked list*/
			while(MidIndex != ((LinkedListSize / 2) - 1))
			{
				MidIndex++;
				Ptr = Ptr -> Link;
			}
			
			/*Save values of the two middle elements*/
			Even1 = Ptr -> Info;
			Even2 = Ptr -> Link -> Info;
			
			MidData = Even1 + Even2;
		}
		else
		{			
			/*Reach the middle element*/
			while(MidIndex != (LinkedListSize / 2))
			{
				MidIndex++;
				Ptr = Ptr -> Link;
			}
			
			/*Save its value*/
			Odd = Ptr -> Info;
			MidData = Odd;
		}
	
	}
	
	/*Return the middle element info*/
	return MidData;
}


