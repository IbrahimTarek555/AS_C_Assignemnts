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
void DiplayLinkedList(Node_t *StartAdress);
/*A function to scan a linked list*/
void ScanLinkedList(Node_t *StartAdress);
/*A function to count a linked list elements*/
int CountLinkedListNodes(Node_t *StartAdress);
/*A function to search a number through a linked list*/
int SearchLinkedList(Node_t *StartAdress, int SearchNumber);
/*A function to insert an element at the beginning of a linked list and return the linked list adress after isertion*/
Node_t *InsertAtBeginning(Node_t *StartAdress, int InsertionNumber);
/*A function to insert an element at the end of a linked list*/
void InsertAtEnd(Node_t *StartAdress, int InsertionNumber);




/*This is the main*/
int main()
{
	int LinkedListSize, SearchNumber, SearchIndex, InsertionNumber;
	Node_t *StartAdress = NULL;
	
	/*Scanning the length of the linked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	
	/*Calling a function to reserve a linked list with Size elements and return the first element Adress*/
	StartAdress = CreateLinkedList(LinkedListSize);
	
	/*Scanning the linked list*/
	ScanLinkedList(StartAdress);
	
	/*Displaying the linked list*/
	DiplayLinkedList(StartAdress);
	
	/*Counting the linked list*/
	LinkedListSize = CountLinkedListNodes(StartAdress);
	printf("Number of nodes on the linked list is: %d\n", LinkedListSize);
	
	/*Searching a linked list with a number*/
	printf("Please, Enter a number you want to search: ");
	scanf("%d", &SearchNumber);
	SearchIndex = SearchLinkedList(StartAdress, SearchNumber);
	if(SearchIndex == -1)
	{
		printf("The Number does not exist!\n");
	}
	else if(SearchIndex == -2)
	{
		/*Don't do any thing*/
		printf("list is empty!\n");
	}
	else
	{
		printf("You searched for %d and its index is %d.\n", SearchNumber, SearchIndex);
	}
	
	/*Scanning insertion number from the user*/
	printf("Please enter a number you want to insert: ");
	scanf("%d", &InsertionNumber);
	
	/*Inserting the InsertionNumber at the beginning, Then displaying the linked list*/
	StartAdress = InsertAtBeginning(StartAdress, InsertionNumber);
	DiplayLinkedList(StartAdress);
	
	/*Inserting the InsertionNumber at the end, Then displaying the linked list*/
	InsertAtEnd(StartAdress, InsertionNumber);
	DiplayLinkedList(StartAdress);
	
	/*Returning to the operating system*/
	return 0;
}
	

/*Functions' Implementations*/
Node_t* CreateLinkedList(int Size)
{
	/*Defining variables*/
	int i;
	Node_t *StartAdress = NULL, *TempPtr = NULL, *NewElement = NULL;
	
	/*Validating the size*/
	if(Size < 1)
	{
		/*Don't complete the function*/
		return StartAdress;
	}
	
	/*Reserving the first node in the linked list, then assigning its link to NULL*/
	StartAdress = (Node_t *) malloc(sizeof(Node_t));
	StartAdress -> Link = NULL;
	
	/*Assigning TempPtr to the StartAdress, then working with TempPtr so we don't miss the StartAdress*/
	TempPtr = StartAdress;
	
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
	
	return StartAdress;
}

void DiplayLinkedList(Node_t *StartAdress)
{
	/*Defining variables*/
	Node_t *TempPtr = StartAdress;
	
	/*Validating the linked list start adress*/
	if(StartAdress == NULL)
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

void ScanLinkedList(Node_t *StartAdress)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAdress;
	int i = 1;
	
	/*Validating the linked list start adress*/
	if(StartAdress == NULL)
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

int CountLinkedListNodes(Node_t *StartAdress)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAdress; 
	int LinkedListSize = 0;
	
	/*Looping over the linked list elements*/
	while(TempPtr != NULL)
	{
		/*Incrementing the iterator*/
		LinkedListSize++; 
		
		/*Moving the TempPtr to the next element of the linked list*/
		TempPtr = TempPtr -> Link;
	}
	
	/*Returning the length of the linked list*/
	return LinkedListSize;
}

int SearchLinkedList(Node_t *StartAdress, int SearchNumber)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAdress; 
	int Position = 1;
	
	/*Validating the linked list start adress*/
	if(StartAdress == NULL)
	{
		/*If the linked list is empty return -2 to the user as a flag*/
		Position = -2;
	}
	else
	{
		/*Looping over the linked list elements*/
		while(TempPtr != NULL)
		{
			/*If the the first element contain the search number break*/
			if(TempPtr -> Info == SearchNumber)
			{	
				break;
			}
			/*Else increment the iterator and move TempPtr to the next element*/
			else
			{
				Position++;
				TempPtr = TempPtr -> Link;
			}
		}
	
		/*discovering why we break the loop*/
		if(TempPtr == NULL)
		{
			/*If the Number does not exist return -1 to the user as a flag*/
			Position = -1;
		}
	}
	
	/*Returning the SearchNumber index*/
	return Position;
}

Node_t *InsertAtBeginning(Node_t *StartAdress, int InsertionNumber)
{
	/*Reserving a new node*/
	Node_t *NewElement = malloc(sizeof(Node_t));
	
	/*Intializing its Info value to the InsertionNumber*/
	NewElement -> Info = InsertionNumber;
	
	/*Changing the StartAdress to make the new element the beginning of the linked list*/
	NewElement -> Link = StartAdress;
	StartAdress = NewElement;
	
	/*Returning the new adress of the linked list*/
	return StartAdress;
}

void InsertAtEnd(Node_t *StartAdress, int InsertionNumber)
{
	/*Defining Variables*/
	Node_t *TempPtr = StartAdress;
	
	/*Reserving a new node*/
	Node_t *NewElement = malloc(sizeof(Node_t));
	
	/*Intializing its Info value to the InsertionNumber, and its Link to NULL*/
	NewElement -> Info = InsertionNumber;
	NewElement -> Link = NULL; 
	
	/*Looping over the linked list elements to reach the last element*/
	while(TempPtr -> Link != NULL)
	{
		/*Moving the TempPtr to the next element of the linked list*/
		TempPtr = TempPtr -> Link;
	}
	
	/*Expanding the linked list by changing the Link of the last element to the new element*/
	TempPtr -> Link = NewElement;
}