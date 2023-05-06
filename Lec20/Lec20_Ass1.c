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
/*A function to display a linked list in reverse order*/
void ReverseDisplayDoubleyLinkedList(Node_dt *StartAddress);
/*A function to scan a linked list*/
void ScanDoubleyLinkedList(Node_dt *StartAddress);
/*A function to count a linked list elements*/
int CountDoubleyLinkedListNodes(Node_dt *StartAddress);
/*A function to search a number through a linked list*/
void SearchLinkedList(Node_dt *StartAddress, int SearchNumber);
/*A function to insert an element at an empty linked list*/
Node_dt *InsertAtEmpty(Node_dt *StartAddress, int InsertionNumber);
/*A function to insert an element at the beginning of a linked list and return the linked list adress after isertion*/
Node_dt *InsertAtBeginning(Node_dt *StartAddress, int InsertionNumber);
/*A function to insert an element at the end of a linked list*/
void InsertAtEnd(Node_dt *StartAddress, int InsertionNumber);
/*A function to insert a node after a node*/
void InsertAfterNode(Node_dt *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node before a node*/
Node_dt *InsertBeforeNode(Node_dt *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node at a given position*/
Node_dt *InsertAtPosition(Node_dt *StartAddress, int NodeIndex, int InsertionNumber);
/*A function to delete an element from a linked list*/
Node_dt *DeleteFromLinkedList(Node_dt *StartAddress, int DeletedElement);
/*A function to reverse a linked list*/
Node_dt *ReverseDoubleyLinkedList(Node_dt *StartAddress);


/*It is the main*/
int main()
{
	int LinkedListSize, SearchNumber, NodeValue, InsertionNumber, DeletedNumber;
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
	ReverseDisplayDoubleyLinkedList(StartAddress);
	
	/*Counting the linked list*/
	LinkedListSize = CountDoubleyLinkedListNodes(StartAddress);
	printf("Number of nodes on the linked list is: %d\n", LinkedListSize);
	
	/*Reversing the linked list*/
	StartAddress = ReverseDoubleyLinkedList(StartAddress);
	DisplayDoubleyLinkedList(StartAddress);
	
	/*Searching the linked list*/
	printf("Please enter a number you want to search: ");
	scanf("%d", &SearchNumber);
	SearchLinkedList(StartAddress, SearchNumber);
	
	/*Insert a node at empty linked list*/
	printf("Enter a number to insert at an empty linked list: ");
	scanf("%d", &InsertionNumber);
	StartAddress = InsertAtEmpty(StartAddress, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Insert a node at beginning*/
	printf("Enter a number to insert at beginning: ");
	scanf("%d", &InsertionNumber);
	StartAddress = InsertAtBeginning(StartAddress, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Insert a node at end*/
	printf("Enter a number to insert at end: ");
	scanf("%d", &InsertionNumber);
	InsertAtEnd(StartAddress, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Insert a node after a node*/
	printf("Enter a number to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Enter a number to insert after: ");
	scanf("%d", &NodeValue);
	InsertAfterNode(StartAddress, NodeValue, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Insert a node before a node*/
	printf("Enter a number to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Enter a number to insert before: ");
	scanf("%d", &NodeValue);
	StartAddress = InsertBeforeNode(StartAddress, NodeValue, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);

	/*Insert a node at position*/
	printf("Enter a number to insert: ");
	scanf("%d", &InsertionNumber);
	printf("Enter a position to insert at: ");
	scanf("%d", &NodeValue);
	InsertAtPosition(StartAddress, NodeValue, InsertionNumber);
	DisplayDoubleyLinkedList(StartAddress);
	
	/*Delete a node from linked list*/
	printf("Enter a number you want to delete: ");
	scanf("%d", &DeletedNumber);
	StartAddress = DeleteFromLinkedList(StartAddress, DeletedNumber);
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
void ReverseDisplayDoubleyLinkedList(Node_dt *StartAddress)
{
	/*Define variables*/
	Node_dt *TempPtr = StartAddress;
	
	/*Validate the linked list start address*/
	if(StartAddress == NULL)
	{
		printf("ReverseDisplayDoubleyLinkedList: Linked List is empty!\n");
	}
	else 
	{
		/*Print a message to the user*/
		printf("The doubley linked list members (in reverse order) are: ");
		
		/*Reach the last element of the linked list*/
		while(TempPtr -> Next != NULL)
		{
			/*move the TempPtr to the next element*/
			TempPtr = TempPtr -> Next;
		}
	
		/*Pass over all the linked list elements and print them*/
		while(TempPtr != NULL)
		{
			printf("%d\t", TempPtr -> Info);
			
			/*move the TempPtr to the previous element*/
			TempPtr = TempPtr -> Previous;
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
int CountDoubleyLinkedListNodes(Node_dt *StartAddress)
{
	/*Define variables*/
	int Size = 0;
	Node_dt *TempPtr = StartAddress;
	
	/*Validate the linked list start address*/
	if(StartAddress == NULL)
	{
		/*Do not do any thing*/
	}
	else
	{
		while(TempPtr != NULL)
		{
			Size++;
			TempPtr = TempPtr -> Next;
		}
	}
	
	return Size;
}

void SearchLinkedList(Node_dt *StartAddress, int SearchNumber)
{
	/*Define variables*/
	Node_dt *TempPtr = StartAddress;
	int Position = 0;
	
	/*Validate StartAddress*/
	if(StartAddress == NULL)
	{
		printf("Linked List is empty!\n");
	}
	else
	{
		/*Looping over the linked list elements*/
		while(TempPtr != NULL)
		{
			/*Increment the position by 1*/
			Position++;
			
			/*If the element contain the search number break*/
			if(TempPtr -> Info == SearchNumber)
			{
				break;
			}
			else 
			{
				/*Else, move to the next element*/
				TempPtr = TempPtr -> Next;
			}
		}
		
		/*Why the loop had been breaked*/
		if(TempPtr == NULL)
		{
			printf("The number does not exist!\n");
		}
		else
		{
			printf("Number %d is at position %d.\n", SearchNumber, Position);
		}
	}
}

Node_dt *InsertAtEmpty(Node_dt *StartAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_dt *NewElement = NULL;
	
	/*Validate linked list start address*/
	if(StartAddress != NULL)
	{
		printf("InsertAtEmpty: This linked list is not an empty linked list!\n");
	}
	else
	{
		/*Reserve new element and insert it into the empty linked list*/
		NewElement = (Node_dt *) malloc(sizeof(Node_dt));
		NewElement -> Info = InsertionNumber;
		NewElement -> Next = NULL;
		NewElement -> Previous = NULL;
		StartAddress = NewElement;
	}
	
	/*Return StartAddress*/
	return StartAddress;
}
Node_dt *InsertAtBeginning(Node_dt *StartAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_dt *NewElement = NULL;
	
	/*Validate linked list start address*/
	if(StartAddress == NULL)
	{
		printf("InsertAtBeginning: Linked List is empty!\n");
	}
	else
	{
		/*Reserve new element and insert it at beginning*/
		NewElement = (Node_dt *) malloc(sizeof(Node_dt));
		NewElement -> Info = InsertionNumber;
		NewElement -> Next = StartAddress;
		NewElement -> Previous = StartAddress -> Previous;
		StartAddress -> Previous = NewElement;
		StartAddress = NewElement;
	}
	
	/*Return StartAddress*/
	return StartAddress;
}

void InsertAtEnd(Node_dt *StartAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_dt *NewElement = NULL;
	Node_dt *TempPtr = StartAddress;
	
	/*Validate linked list start address*/
	if(StartAddress == NULL)
	{
		printf("InsertAtEnd: Linked List is empty!\n");
	}
	else
	{
		/*Reach the last element of the linked list*/
		while(TempPtr -> Next != NULL)
		{
			TempPtr = TempPtr -> Next;
		}
		
		/*Reserve new element and insert it at end*/
		NewElement = (Node_dt *) malloc(sizeof(Node_dt));
		NewElement -> Info = InsertionNumber;
		NewElement -> Next = TempPtr -> Next;
		NewElement -> Previous = TempPtr;
		TempPtr -> Next = NewElement;
	}
}

void InsertAfterNode(Node_dt *StartAddress, int NodeValue, int InsertionNumber)
{
	/*Define Variables*/
	Node_dt *NewElement = NULL;
	Node_dt *TempPtr = StartAddress;
	int IfLast = 0;
	/*Validate StartAddress*/
	if(StartAddress == NULL)
	{
		printf("InsertAfterNode: Linked List is empty!\n");
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
				TempPtr = TempPtr -> Next;
			}
		}
		
		/*Why the loop had been breaked*/
		if(TempPtr == NULL)
		{
			printf("InsertAfterNode: The node does not exist!\n");
		}
		else
		{
			if(TempPtr -> Next == NULL)
			{
				IfLast = 1;
			}
			/*Reserve new element and insert it after the node*/
			NewElement = (Node_dt *) malloc(sizeof(Node_dt));
			NewElement -> Info = InsertionNumber;
			NewElement -> Next = TempPtr -> Next;
			NewElement -> Previous = TempPtr;
			/*Difference in inserting due to IfLast*/
			if(IfLast == 0)
			{
				TempPtr -> Next -> Previous = NewElement;
			}
			TempPtr -> Next = NewElement;
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

Node_dt *InsertAtPosition(Node_dt *StartAddress, int NodeIndex, int InsertionNumber)
{
	/*Define Variables*/
	Node_dt *NewElement = NULL;
	Node_dt *TempPtr = StartAddress;
	int i = 1;
	
	/*Validate StartAddress*/
	if(StartAddress == NULL)
	{
		printf("InsertAtPosition: Linked List is empty!\n");
	}
	else
	{
		/*Reserve new element*/
		NewElement = (Node_dt *) malloc(sizeof(Node_dt));
		NewElement -> Info = InsertionNumber;
		
		/*The element is the first element*/
		if(NodeIndex == 1)
		{
			/*insert the new element at beginning*/
			NewElement -> Next = StartAddress -> Next;
			NewElement -> Previous = StartAddress -> Previous;
			StartAddress -> Previous = NewElement;
			StartAddress = NewElement;
		}
		/*The element isn't the first element*/
		else
		{
			/*reach the node to which we insert at*/
			while(TempPtr -> Next != NULL)
			{
				if(i == NodeIndex)
				{
					break;
				}
				else
				{
					TempPtr = TempPtr -> Next;	
					i++;					
				}
			}
			
			/*Why the loop had been breaked*/
			
			/*If it is the last node*/
			if((++i) == NodeIndex)
			{
				NewElement -> Next = NULL;
				NewElement -> Previous = TempPtr;
				TempPtr -> Next = NewElement;
			}
			else if(TempPtr -> Next == NULL)
			{
				printf("InsertAtPosition: The Node Index is not valid!\n");
			}
			else
			{
				/*insert the new element before the TempPtr node*/
				NewElement -> Next = TempPtr;
				NewElement -> Previous = TempPtr -> Previous;
				TempPtr -> Previous -> Next = NewElement;
				TempPtr -> Previous = NewElement;								
			}
		}
	}
	
	/*Return StartAddress*/
	return StartAddress;
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