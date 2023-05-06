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

/*A function to concatenate two circular linked lists into one circular linked list*/
Node_ct *ConcatenateCircularLinkedLists(Node_ct *LastAddress1, Node_ct *LastAddress2);

/*It is the main*/
int main()
{
	/*Defining variables*/
	int LinkedListSize;
	Node_ct *LastAddress = NULL, *LastAddress1 = NULL, *LastAddress2 = NULL;
	
	/*The first circular linked list*/
	/*Scanning the length of the flinked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	/*Calling a function to reserve a linked list with Size elements and return the last element Adress*/
	LastAddress1 = CreateCircularLinkedList(LinkedListSize);
	/*Scanning the linked list*/
	ScanCircularLinkedList(LastAddress1);

	/*The second circular linked list*/
	/*Scanning the length of the flinked list from the user*/
	printf("Please enter the length of the linked list: ");
	scanf("%d", &LinkedListSize);
	/*Calling a function to reserve a linked list with Size elements and return the last element Adress*/
	LastAddress2 = CreateCircularLinkedList(LinkedListSize);
	/*Scanning the linked list*/
	ScanCircularLinkedList(LastAddress2);
	
	/*Displaying the linked lists*/
	DisplayCircularLinkedList(LastAddress1);
	DisplayCircularLinkedList(LastAddress2);
	
	/*Concatenate two linked lists*/
	LastAddress = ConcatenateCircularLinkedLists(LastAddress1, LastAddress2);
	
	/*Displaying the concatenated linked list*/
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

Node_ct *ConcatenateCircularLinkedLists(Node_ct *LastAddress1, Node_ct *LastAddress2)
{
	/*Defining Temporary Pointer to Circular Node*/
	Node_ct *TempPtr = NULL;
	
	/*Validate linked lists*/
	if((LastAddress1 == NULL) || (LastAddress2 == NULL))
	{
		printf("ConcatenateCircularLinkedLists: There is an empty linked list!\n");
	}
	else
	{
		/*Concatenate Linked Lists*/
		TempPtr = LastAddress1 -> Link;
		LastAddress1 -> Link = LastAddress2 -> Link;
		LastAddress2 -> Link = TempPtr;
	}
	
	/*Returning the new address*/
	return LastAddress2;
}
