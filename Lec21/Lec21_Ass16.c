#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

/*Functions' Prototypes*/
/*Fuction to initialize a Queue of Circular linked list*/
void CircularLinkedListQueueInit(Node_ct **RearPtr);
/*Fuction to check if the Queue of Circular linked list is empty*/
int CircularLinkedListQueueIsEmpty(Node_ct *Rear);
/*Function to Enqueue into a Queue of Circular linked list*/
void CircularLinkedListQueueEnqueue(Node_ct **RearPtr, int NewElement);
/*Function to Dequeue from a Queue of Circular linked list*/
int CircularLinkedListQueueDequeue(Node_ct **RearPtr);
/*Function to peek from a Queue or Circular linked list*/
int CircularLinkedListQueuePeek(Node_ct *Rear);
/*Function to return number of Circular linked list Queue elements*/
int CircularLinkedListQueueSize(Node_ct *Rear);
/*Function to display Circular linked list Queue elements*/
void CircularLinkedListQueueDisplay(Node_ct *Rear);


/*It is the main*/
int main()
{
	/*Defining Variables*/
	int NewElement;
	int QueueSize;
	int PeekElement;
	
	Node_ct *Rear = NULL;
	
	/*Queue Initialization*/
	CircularLinkedListQueueInit(&Rear);
	
	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularLinkedListQueueEnqueue(&Rear, NewElement);
	CircularLinkedListQueueDisplay(Rear);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularLinkedListQueueEnqueue(&Rear, NewElement);
	CircularLinkedListQueueDisplay(Rear);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularLinkedListQueueEnqueue(&Rear, NewElement);
	CircularLinkedListQueueDisplay(Rear);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularLinkedListQueueEnqueue(&Rear, NewElement);
	CircularLinkedListQueueDisplay(Rear);
	
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularLinkedListQueueEnqueue(&Rear, NewElement);
	CircularLinkedListQueueDisplay(Rear);

	/*Peek Operation*/
	PeekElement = CircularLinkedListQueuePeek(Rear);
	printf("Peek: %d\n", PeekElement);
	
	/*Printing Number of Queue Elements*/
	QueueSize = CircularLinkedListQueueSize(Rear);
	printf("Number of elements is: %d\n", QueueSize);

	/*Dequeue Elements*/
	CircularLinkedListQueueDequeue(&Rear);
	CircularLinkedListQueueDisplay(Rear);
	CircularLinkedListQueueDequeue(&Rear);
	CircularLinkedListQueueDisplay(Rear);
	CircularLinkedListQueueDequeue(&Rear);
	CircularLinkedListQueueDisplay(Rear);
	CircularLinkedListQueueDequeue(&Rear);
	CircularLinkedListQueueDisplay(Rear);
	CircularLinkedListQueueDequeue(&Rear);
	CircularLinkedListQueueDisplay(Rear);

	/*Printing Number of Queue Elements*/
	QueueSize = CircularLinkedListQueueSize(Rear);
	printf("Number of elements is: %d\n", QueueSize);
		
	/*Peek Operation*/
	PeekElement = CircularLinkedListQueuePeek(Rear);
	printf("Peek: %d\n", PeekElement);

	
	/*Returning to the operating system*/
	return 0;

}

void CircularLinkedListQueueInit(Node_ct **RearPtr)
{
	/*Validate addresses*/
	if(RearPtr == NULL)
	{
		/*Do no thing*/
	}
	else
	{
		/*Initializing Rear*/
		*RearPtr = NULL;
	}
}

int CircularLinkedListQueueIsEmpty(Node_ct *Rear)
{
	/*Defining Variables*/
	int IsEmpty;
	
	/*Check Queue State*/
	if(Rear == NULL)
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

void CircularLinkedListQueueEnqueue(Node_ct **RearPtr, int NewElement)
{
	/*Defining Variables*/
	int IsEmpty = CircularLinkedListQueueIsEmpty(*RearPtr);
	
	/*Do not Validate the address because sometimes the linked list maybe empty*/
	if(IsEmpty == 1)
	{
		*RearPtr = InsertAtEmptyCircular(*RearPtr, NewElement);
	}
	else
	{
		*RearPtr = InsertAtEndCircular(*RearPtr, NewElement);
	}
}

int CircularLinkedListQueueDequeue(Node_ct **RearPtr)
{
	/*Defining Variables*/
	int IsEmpty;
	int FrontElement = 0;
	Node_ct *Rear = NULL;

	/*Validate the address*/
	if(RearPtr != NULL)
	{
		/*Getting Rear Address*/
		Rear = *RearPtr;
		
		/*Check if the Queue is empty or not*/
		IsEmpty = CircularLinkedListQueueIsEmpty(*RearPtr);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Getting the first element*/
			FrontElement = Rear -> Link -> Info;
			
			/*Dequeue Operation*/
			*RearPtr = DeleteFromLinkedListCircular(*RearPtr, FrontElement);
		}
	}
	
	/*Return the First element of Queue*/
	return FrontElement;
}
int CircularLinkedListQueuePeek(Node_ct *Rear)
{
	/*Defining Variables*/
	int FrontElement = 0;
	int IsEmpty;
	
	/*Validate the address*/
	if(Rear != NULL)
	{
		/*Check if the Queue is empty*/
		IsEmpty = CircularLinkedListQueueIsEmpty(Rear);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Return First Queue Element*/
			FrontElement = Rear -> Link -> Info;
		}
		
	}
	
	/*Return the first element of Queue*/
	return FrontElement;

}

int CircularLinkedListQueueSize(Node_ct *Rear)
{
	/*Defining Variables*/
	int QueueSize;
	
	/*Calculate the size*/
	if(Rear == NULL)
	{
		QueueSize = 0;
	}
	else
	{
		/*Get Queue Size*/
		QueueSize = CountCircularLinkedListNodes(Rear);				
	}
	
	/*Return Queue Size*/
	return QueueSize;
}

void CircularLinkedListQueueDisplay(Node_ct *Rear)
{
	/*Validate the address*/
	if(Rear != NULL)
	{
		/*Display Queue Elements*/
		DisplayCircularLinkedList(Rear);
	}
}
