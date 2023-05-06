#include <stdio.h>
#include <stdlib.h>

/*New struct type definintion*/
typedef struct Node
{
	int Info;
	struct Node *Link;
}Node_t;

/*Functions Prototypes*/
/*A function to reserve a linked list with Size elements and return the first element Adress*/
Node_t *CreateLinkedList(int Size);
/*A function to display a linked list*/
void DisplayLinkedList(Node_t *StartAddress);
/*A function to scan a linked list*/
void ScanLinkedList(Node_t *StartAddress);
/*A function to insert a node after a node*/
void InsertAfterNode(Node_t *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node before a node*/
Node_t *InsertBeforeNode(Node_t *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node at a given position*/
Node_t *InsertAtPosition(Node_t *StartAddress, int NodeIndex, int InsertionNumber);
/*A function to delete an element from a linked list*/
Node_t *DeleteFromLinkedList(Node_t *StartAddress, int DeletedElement);
/*A function to reverse a linked list*/
Node_t *ReverseLinkedList(Node_t *StartAddress);
/*A function to reverse a linked list (Bad Implementation)*/
Node_t *ReverseLinkedList1(Node_t *StartAddress);




/*This is the main*/
int main()
{
	int LinkedListSize, InsertionNumber, NodeValue, DeletedNumber;
	Node_t *StartAddress = NULL;
	
	/*Scanning the length of the linked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	
	/*Calling a function to reserve a linked list with Size elements and return the first element Adress*/
	StartAddress = CreateLinkedList(LinkedListSize);
	
	/*Scanning the linked list*/
	ScanLinkedList(StartAddress);
	
	/*Displaying the linked list*/
	DisplayLinkedList(StartAddress);
		
	/*Scanning insertion number from the user*/
	printf("Please enter a number you want to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Please enter a number you want to insert %d after: ", InsertionNumber);
	scanf("%d", &NodeValue);

	/*Inserting the InsertionNumber after a node*/
	InsertAfterNode(StartAddress, NodeValue, InsertionNumber);
	/*Diplaying the linked list*/
	DisplayLinkedList(StartAddress);
	
	/*Scanning insertion number from the user*/
	printf("Please enter a number you want to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Please enter a number you want to insert %d before: ", InsertionNumber);
	scanf("%d", &NodeValue);

	/*Inserting the InsertionNumber before a node*/
	StartAddress = InsertBeforeNode(StartAddress, NodeValue, InsertionNumber);
	/*Displaying the linked list*/
	DisplayLinkedList(StartAddress);

	/*Scanning insertion number from the user*/
	printf("Please enter a number you want to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Please enter a node you want to insert %d at: ", InsertionNumber);
	scanf("%d", &NodeValue);

	/*Inserting the InsertionNumber at a node*/
	StartAddress = InsertAtPosition(StartAddress, NodeValue, InsertionNumber);
	/*Diplaying the linked list*/
	DisplayLinkedList(StartAddress);
	
	/*Scanning Deleted number from the user*/
	printf("Please enter a number you want to delete: ");
	scanf("%d", &DeletedNumber);

	/*Deleting the number from the linked list*/
	StartAddress = DeleteFromLinkedList(StartAddress, DeletedNumber);
	/*Diplaying the linked list*/
	DisplayLinkedList(StartAddress);
	
	/*Reversing the linked list*/
	StartAddress = ReverseLinkedList(StartAddress);
	/*Displaying the linked list*/
	DisplayLinkedList(StartAddress);
	
	/*Returning to the operating system*/
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

Node_t *InsertBeforeNode(Node_t *StartAddress, int NodeValue, int InsertionNumber)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAddress, *NewElement = NULL;
	int IfFirst;

	/*Validating the linked list adress*/
	if(StartAddress == NULL)
	{
		return StartAddress;
	}
	
	/*Searching for the node through the linked list, and discovering if the node is the first element or not*/
	while(TempPtr != NULL)
	{
		if(TempPtr -> Info == NodeValue)
		{
			IfFirst = 1;
			break;
		}
		else if((TempPtr -> Link != NULL) && (TempPtr -> Link -> Info == NodeValue))
		{
			IfFirst = 0;
			break;
		}
		else
		{
			TempPtr = TempPtr -> Link;
		}
	}
	
	/*Descovering why we breaked the loop and knowing if is the node is the first element or not*/
	if(TempPtr == NULL)
	{
		printf("Does not exist");
		return StartAddress;
	}
	else if(IfFirst == 1)
	{
		/*Reserving new node and iserting it through the linked list*/
		NewElement = (Node_t *) malloc(sizeof(Node_t));
		NewElement -> Info = InsertionNumber;
		StartAddress = NewElement;
		NewElement -> Link = TempPtr;
		return StartAddress;
	}
	else
	{
		/*Reserving new node and iserting it through the linked list*/
		NewElement = (Node_t *) malloc(sizeof(Node_t));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = TempPtr -> Link;
		TempPtr -> Link = NewElement;
	}
	
	/*Returning the new start address*/
	return StartAddress;
}

void InsertAfterNode(Node_t *StartAddress, int NodeValue, int InsertionNumber)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAddress, *NewElement = NULL;

	/*Validating the linked list address*/
	if(StartAddress == NULL)
	{
		return;
	}
	
	/*Searching for the node through the linked list*/
	while(TempPtr != NULL)
	{
		if(TempPtr -> Info == NodeValue)
		{
			break;
		}
		else
		{
			TempPtr = TempPtr -> Link;
		}
	}
	
	/*Descovering why we breaked the loop*/
	if(TempPtr == NULL)
	{
		/*The node does not exist*/
		return;
	}
	else 
	{
		/*Reserving new node and inserting it through the linked list*/
		NewElement = (Node_t *) malloc(sizeof(Node_t));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = TempPtr -> Link;
		TempPtr -> Link = NewElement;
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
		return StartAddress;
	}
	
	/*Validating the node index*/
	if(NodeIndex < 1)
	{
		return StartAddress;
	}
	/*Descovering if it is the first node or not*/
	else if(NodeIndex == 1)
	{
		IfFirst = 1;
	}
	else 
	{
		IfFirst = 0;
	}
	
	/*Moving to the previous node to the node on the linked list*/
	for(i = 1; i < (NodeIndex - 1); i++)
	{
		if(TempPtr == NULL)
		{
			/*The node does not exist*/
			return StartAddress;
		}
		
		/*Moving the pointer to the next element*/
		TempPtr = TempPtr -> Link;
	}
	
	/*Reserving new node and inserting it through the linked list*/
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
	
	/*Returning the Start Adress*/
	return StartAddress;
}

Node_t *DeleteFromLinkedList(Node_t *StartAddress, int DeletedElement)
{
	/*Defining Variables*/
	int IfFirst;
	Node_t *TempPtr = StartAddress, *DeletedNode = NULL;
	
	/*Validating StartAddress*/
	if(TempPtr == NULL)
	{
		/*The linked list is empty*/
	}
	
	/*If the node is the first element or the linked list has one element*/
	else if(TempPtr -> Info == DeletedElement)
	{
		StartAddress = TempPtr -> Link;
		free(TempPtr);
	}
	
	else
	{
		/*Moving the pointer to the previous element to the element we want to delete*/
		while(TempPtr -> Link != NULL)
		{
			if(TempPtr -> Link -> Info == DeletedElement)
			{
				break;
			}
			else
			{
				TempPtr = TempPtr -> Link;
			}
		}
		
		/*Discovering why the loop breaked*/
		if(TempPtr -> Link == NULL)
		{
			/*Element Not found*/
		}
		else 
		{
			/*Moving the pointer from the previous element to the next element, then delete the element itself*/
			DeletedNode = TempPtr -> Link;
			TempPtr -> Link = DeletedNode -> Link;
			free(DeletedNode);	
		}
	}
		
	return StartAddress;
}


Node_t *ReverseLinkedList1(Node_t *StartAddress)
{
	Node_t *TempPtr = StartAddress, *Ptr = StartAddress, *StartTemp = StartAddress;
	
	/*Validating the start address*/
	if(StartAddress == NULL)
	{
		/*Don't do any thing*/
	}
	
	else
	{
		while(TempPtr -> Link != NULL)
		{
			TempPtr = TempPtr -> Link;
		}
	
		StartAddress = TempPtr;
	
		while(TempPtr != StartTemp)
		{
			while(Ptr -> Link != TempPtr)
			{
				Ptr = Ptr -> Link;
			}
		
			TempPtr -> Link = Ptr;
			TempPtr = TempPtr -> Link;
			Ptr = StartTemp;
		}
	
		TempPtr -> Link = NULL;
	}
	
	return StartAddress;
}

Node_t *ReverseLinkedList(Node_t *StartAddress)
{
	Node_t *Previous = NULL, *Actuall = StartAddress, *Next = StartAddress;
	
	/*Validating the start address*/
	if(StartAddress == NULL)
	{
		/*Don't do any thing*/
	}
	
	else
	{
		while(Next != NULL)
		{
			/*Moving Next to the next element*/
			Next = Next -> Link;

			/*Making Actuall Point to the previous*/
			Actuall -> Link = Previous;
			
			/*Moving Actuall and Previous to the next element*/
			Previous = Actuall;
			Actuall = Next;
		}
		
		/*Moving StartAddress to the last element of the linked list*/
		StartAddress = Previous;
	}
	
	return StartAddress;
}

