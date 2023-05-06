#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkedList.h"

/*Functions' Prototypes*/
/*Fuction to initialize a Queue of array*/
void ArrayQueueInit(int *FrontPtr, int *RearPtr);
/*Fuction to check if the Queue of array is full*/
int ArrayQueueIsFull(int Rear, int Size);
/*Fuction to check if the Queue of array is empty*/
int ArrayQueueIsEmpty(int Front, int Rear);
/*Function to Enqueue into a Queue of array*/
void ArrayQueueEnqueue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement);
/*Function to Dequeue from a Queue of array*/
int ArrayQueueDequeue(int *FrontPtr, int *RearPtr, int *QueueArray, int NewElement);
/*Function to peek from a Queue or array*/
int ArrayQueuePeek(int Front, int Rear, int *QueueArray);
/*Function to return number of array Queue elements*/
int ArrayQueueSize(int Front, int Rear);
/*Function to display array Queue elements*/
void ArrayQueueDisplay(int Front, int Rear, int *QueueArray);

/*Fuction to initialize a Queue of Single linked list*/
void LinkedListQueueInit(Node_t **FrontPtr, Node_t **RearPtr);
/*Fuction to check if the Queue of linked list is empty*/
int LinkedListQueueIsEmpty(Node_t *Front);
/*Function to Enqueue into a Queue of linked list*/
void LinkedListQueueEnqueue(Node_t **FrontPtr, Node_t **RearPtr, int NewElement);
/*Function to Dequeue from a Queue of linked list*/
int LinkedListQueueDequeue(Node_t **FrontPtr);
/*Function to peek from a Queue or linked list*/
int LinkedListQueuePeek(Node_t *Front);
/*Function to return number of linked list Queue elements*/
int LinkedListQueueSize(Node_t *Front);
/*Function to display linked list Queue elements*/
void LinkedListQueueDisplay(Node_t *Front);

/*Test Functions*/
void ArrayQueueTest();
void LinkedListQueueTest();

/*It is the main*/
int main()
{
	/*Copy code below to test functions*/
	LinkedListQueueTest();
	
	/*Returning to the operating system*/
	return 0;

}


void ArrayQueueTest()
{
	/*Defining Variables*/
	int QueueArray[10];
	int Size = 10;
	int Front;
	int Rear;
	int NewElement;
	int QueueSize;
	int PeekElement;
	
	/*Queue Initialization*/
	ArrayQueueInit(&Front, &Rear);
	
	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	ArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	ArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	ArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	ArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	ArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);

	/*Printing Number of Queue Elements*/
	QueueSize = ArrayQueueSize(Front, Rear);
	printf("Number of elements is: %d\n", QueueSize);

	/*Peek Operation*/
	PeekElement = ArrayQueuePeek(Front, Rear, QueueArray);
	printf("Peek: %d\n", PeekElement);

	/*Dequeue Elements*/
	ArrayQueueDequeue(&Front, &Rear, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	ArrayQueueDequeue(&Front, &Rear, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	ArrayQueueDequeue(&Front, &Rear, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	ArrayQueueDequeue(&Front, &Rear, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	ArrayQueueDequeue(&Front, &Rear, QueueArray, NewElement);
	ArrayQueueDisplay(Front, Rear, QueueArray);
	
	/*Printing Number of Queue Elements*/
	QueueSize = ArrayQueueSize(Front, Rear);
	printf("Number of elements is: %d\n", QueueSize);
		
	/*Peek Operation*/
	PeekElement = ArrayQueuePeek(Front, Rear, QueueArray);
	printf("Peek: %d\n", PeekElement);

}

void LinkedListQueueTest()
{
	/*Defining Variables*/
	int NewElement;
	int QueueSize;
	int PeekElement;
	
	Node_t *Front = NULL;
	Node_t *Rear = NULL;
	
	/*Queue Initialization*/
	LinkedListQueueInit(&Front, &Rear);
	
	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	LinkedListQueueEnqueue(&Front, &Rear, NewElement);
	LinkedListQueueDisplay(Front);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	LinkedListQueueEnqueue(&Front, &Rear, NewElement);
	LinkedListQueueDisplay(Front);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	LinkedListQueueEnqueue(&Front, &Rear, NewElement);
	LinkedListQueueDisplay(Front);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	LinkedListQueueEnqueue(&Front, &Rear, NewElement);
	LinkedListQueueDisplay(Front);
	
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	LinkedListQueueEnqueue(&Front, &Rear, NewElement);
	LinkedListQueueDisplay(Front);

	/*Peek Operation*/
	PeekElement = LinkedListQueuePeek(Front);
	printf("Peek: %d\n", PeekElement);
	
	/*Printing Number of Queue Elements*/
	QueueSize = LinkedListQueueSize(Front);
	printf("Number of elements is: %d\n", QueueSize);

	/*Dequeue Elements*/
	LinkedListQueueDequeue(&Front);
	LinkedListQueueDisplay(Front);
	LinkedListQueueDequeue(&Front);
	LinkedListQueueDisplay(Front);
	LinkedListQueueDequeue(&Front);
	LinkedListQueueDisplay(Front);
	LinkedListQueueDequeue(&Front);
	LinkedListQueueDisplay(Front);
	LinkedListQueueDequeue(&Front);
	LinkedListQueueDisplay(Front);

	/*Printing Number of Queue Elements*/
	QueueSize = LinkedListQueueSize(Front);
	printf("Number of elements is: %d\n", QueueSize);
		
	/*Peek Operation*/
	PeekElement = LinkedListQueuePeek(Front);
	printf("Peek: %d\n", PeekElement);
}

void ArrayQueueInit(int *FrontPtr, int *RearPtr)
{
	/*Initializing Front and Rear*/
	*FrontPtr = -1;
	*RearPtr = -1;
}

int ArrayQueueIsFull(int Rear, int Size)
{
	/*Defining Variables*/
	int IsFull;
	
	/*Check if the Queue is full*/
	if(Rear == (Size - 1))
	{
		IsFull = 1;
	}
	else
	{
		IsFull = 0;
	}
	
	/*Return State of the Queue*/
	return IsFull;
}

int ArrayQueueIsEmpty(int Front, int Rear)
{
	/*Defining Variables*/
	int IsEmpty;

	/*Check if the Queue is full*/
	if((Front == -1) || (Front == (Rear + 1)))
	{
		IsEmpty = 1;
	}
	else
	{
		IsEmpty = 0;
	}
	
	/*Return State of the Queue*/
	return IsEmpty;
}

void ArrayQueueEnqueue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement)
{
	/*Defining Variables*/
	int IsFull = ArrayQueueIsFull(*RearPtr, Size);
	
	/*Check is the Queue is full*/
	if(IsFull == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*If it is the first insertion*/
		if(*FrontPtr == -1)
		{
			/*Move the two pointers*/
			*FrontPtr = 0;
			*RearPtr = 0;
		}
		/*Not the first insertion*/
		else
		{
			/*Move Rear Only*/
			*RearPtr = *RearPtr + 1;
		}
		
		/*Enqueue Operation*/
		QueueArray[*RearPtr] = NewElement;
	}
}

int ArrayQueueDequeue(int *FrontPtr, int *RearPtr, int *QueueArray, int NewElement)
{
	/*Defining Variables*/
	int IsEmpty = ArrayQueueIsEmpty(*FrontPtr, *RearPtr);
	int FrontElement = 0;
	
	/*Check is the Queue is empty*/
	if(IsEmpty == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Dequeue Operation*/
		FrontElement = QueueArray[*FrontPtr];
		*FrontPtr = *FrontPtr + 1;
	}
	
	/*Return the First element of Queue*/
	return FrontElement;
}

int ArrayQueuePeek(int Front, int Rear, int *QueueArray)
{
	/*Defining Variables*/
	int IsEmpty = ArrayQueueIsEmpty(Front, Rear);
	int FrontElement = 0;
	
	/*Check is the queue is empty*/
	if(IsEmpty == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Return Last Queue Element*/
		FrontElement = QueueArray[Front];
	}
	
	/*Return the First element of Queue*/
	return FrontElement;
}

int ArrayQueueSize(int Front, int Rear)
{
	/*Defining Variables*/
	int StackSize;
	
	if(Front == -1)
	{
		StackSize = 0;
	}
	else
	{
		StackSize = Rear - Front + 1;
	}
	
	/*Return StackSize*/
	return StackSize;
}

void ArrayQueueDisplay(int Front, int Rear, int *QueueArray)
{
	/*Defining Variables*/
	int i;
	int IsEmpty = ArrayQueueIsEmpty(Front, Rear);

	if(IsEmpty != 1)
	{
		
		/*Pirnting the queue elements*/
		for(i = Front; i <= Rear; i++)
		{
			printf("%d\t", QueueArray[i]);
		}
		
		/*Printing New Line*/
		printf("\n");
	}
}

void LinkedListQueueInit(Node_t **FrontPtr, Node_t **RearPtr)
{
	/*Validate addresses*/
	if((FrontPtr == NULL) || (RearPtr == NULL))
	{
		/*Do no thing*/
	}
	else
	{
		/*Initializing Front and Rear*/
		*FrontPtr = NULL;
		*RearPtr = NULL;
	}
}

int LinkedListQueueIsEmpty(Node_t *Front)
{
	/*Defining Variables*/
	int IsEmpty;
	
	/*Check Queue State*/
	if(Front == NULL)
	{
		IsEmpty = 1;
	}
	else 
	{
		IsEmpty = 0;
	}
	
	/*Returning Queue State*/
	return IsEmpty;
}

void LinkedListQueueEnqueue(Node_t **FrontPtr, Node_t **RearPtr, int NewElement)
{
	/*Defining Variables*/
	Node_t *LastElementPtr = NULL; 
	
	/*Reserving a new node*/
	Node_t *NewElementPtr = malloc(sizeof(Node_t));
	/*Intializing the node info and link*/
	NewElementPtr -> Info = NewElement;
	NewElementPtr -> Link = NULL;

	/*Do not Validate the address because sometimes the linked list maybe empty*/
	/*If it is the first insertion*/
	if(*FrontPtr == NULL)
	{
		/*Making the front and rear points at the node*/
		*FrontPtr = NewElementPtr;
		*RearPtr = NewElementPtr;
	}
	else
	{
		/*Fixing the linkage*/
		LastElementPtr = *RearPtr;
		LastElementPtr -> Link = NewElementPtr;
		*RearPtr = NewElementPtr;
	}
}

int LinkedListQueueDequeue(Node_t **FrontPtr)
{
	/*Defining Variables*/
	int IsEmpty;
	int FrontElement;
	Node_t *Front = NULL;

	/*Validate the address*/
	if(FrontPtr != NULL)
	{
		/*Getting Top Address*/
		Front = *FrontPtr;
		
		/*Check if the Queue is empty or not*/
		IsEmpty = LinkedListQueueIsEmpty(Front);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Dequeue Operation*/
			FrontElement = Front -> Info;
			*FrontPtr = Front -> Link;
			free(Front);
		}
	}
	
	/*Return the First element of Queue*/
	return FrontElement;
}
int LinkedListQueuePeek(Node_t *Front)
{
	/*Defining Variables*/
	int FrontElement = 0;
	int IsEmpty;
	
	/*Validate the address*/
	if(Front != NULL)
	{
		/*Check if the Queue is empty*/
		IsEmpty = LinkedListQueueIsEmpty(Front);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Return Last Queue Element*/
			FrontElement = Front -> Info;
		}
		
	}
	
	/*Return the last element of Queue*/
	return FrontElement;

}

int LinkedListQueueSize(Node_t *Front)
{
	/*Defining Variables*/
	int QueueSize;
	
	/*Calculate the size*/
	if(Front == NULL)
	{
		QueueSize = 0;
	}
	else
	{
		/*Get Queue Size*/
		QueueSize = CountLinkedListNodes(Front);				
	}
	
	/*Return Queue Size*/
	return QueueSize;
}

void LinkedListQueueDisplay(Node_t *Front)
{
	/*Validate the address*/
	if(Front != NULL)
	{
		/*Display Queue Elements*/
		DisplayLinkedList(Front);
	}
}


