#include <stdio.h>

/*Functions' Prototypes*/
/*Fuction to initialize a Queue of Circular array*/
void CircularArrayQueueInit(int *FrontPtr, int *RearPtr);
/*Fuction to check if the Queue of Circular array is full*/
int CircularArrayQueueIsFull(int Front, int Rear, int Size);
/*Fuction to check if the Queue of Circular array is empty*/
int CircularArrayQueueIsEmpty(int Front);
/*Function to push into a Queue of Circular array*/
void CircularArrayQueueEnqueue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement);
/*Function to pop from a Queue of Circular array*/
int CircularArrayQueueDequeue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement);
/*Function to peek from a Queue or Circular array*/
int CircularArrayQueuePeek(int Front, int *QueueArray);
/*Function to return number of Circular array Queue elements*/
int CircularArrayQueueSize(int Front, int Rear, int Size);
/*Function to display Circular array Queue elements*/
void CircularArrayQueueDisplay(int Front, int Rear, int Size, int *QueueArray);


/*It is the main*/
int main()
{
	/*Defining Variables*/
	int QueueArray[5];
	int Size = 5;
	int Front;
	int Rear;
	int NewElement;
	int QueueSize;
	int PeekElement;
	
	/*Stack Initialization*/
	CircularArrayQueueInit(&Front, &Rear);
	
	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	/*Dequeue Elements*/
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	/*Printing Number of Queue Elements*/
	QueueSize = CircularArrayQueueSize(Front, Rear, Size);
	printf("Number of elements is: %d\n", QueueSize);

	/*Peek Operation*/
	PeekElement = CircularArrayQueuePeek(Front, QueueArray);
	printf("Peek: %d\n", PeekElement);
	
	/*Printing Number of Queue Elements*/
	QueueSize = CircularArrayQueueSize(Front, Rear, Size);
	printf("Number of elements is: %d\n", QueueSize);
	
	/*Dequeue Elements*/
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	/*Enqueue elements*/
	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	printf("Please Enter an element to Enqueue: ");
	scanf("%d", &NewElement);
	CircularArrayQueueEnqueue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	/*Peek Operation*/
	PeekElement = CircularArrayQueuePeek(Front, QueueArray);
	printf("Peek: %d\n", PeekElement);

	/*Dequeue Elements*/
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);

	CircularArrayQueueDequeue(&Front, &Rear, Size, QueueArray, NewElement);
	CircularArrayQueueDisplay(Front, Rear, Size, QueueArray);
	
	/*Printing Number of Queue Elements*/
	QueueSize = CircularArrayQueueSize(Front, Rear, Size);
	printf("Number of elements is: %d\n", QueueSize);

	
	/*Returning to the operating system*/
	return 0;

}

void CircularArrayQueueInit(int *FrontPtr, int *RearPtr)
{
	/*Initializing Front and Rear*/
	*FrontPtr = -1;
	*RearPtr = -1;
}

int CircularArrayQueueIsFull(int Front, int Rear, int Size)
{
	/*Defining Variables*/
	int IsFull;
	
	/*Check if the Queue is full*/
	if(((Front == 0) && (Rear == (Size - 1))) || (Front == Rear + 1))
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

int CircularArrayQueueIsEmpty(int Front)
{
	/*Defining Variables*/
	int IsEmpty;

	/*Check if the Queue is full*/
	if(Front == -1)
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

void CircularArrayQueueEnqueue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement)
{
	/*Defining Variables*/
	int IsFull = CircularArrayQueueIsFull(*FrontPtr, *RearPtr, Size);
	
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
		}
		
		/*If we reached the end of the array but still there is a place*/
		if(*RearPtr == (Size - 1))
		{
			*RearPtr = 0;
		}
		else
		{
			*RearPtr = *RearPtr + 1;
		}
		
		/*Enqueue Operation*/
		QueueArray[*RearPtr] = NewElement;
	}
}

int CircularArrayQueueDequeue(int *FrontPtr, int *RearPtr, int Size, int *QueueArray, int NewElement)
{
	/*Defining Variables*/
	int IsEmpty = CircularArrayQueueIsEmpty(*FrontPtr);
	int FrontElement = 0;
	
	/*Check if the Queue is empty*/
	if(IsEmpty == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Dequeue Operation*/
		FrontElement = QueueArray[*FrontPtr];
		
		/*If there is only one element in the array*/
		if((*FrontPtr) == (*RearPtr))
		{
			/*Reset front and rear to the initial condition*/
			*FrontPtr = -1;
			*RearPtr = -1;
		}
		/*If we reached the end of the array but still there are elements*/
		else if(*FrontPtr == (Size - 1))
		{
			*FrontPtr = 0;
		}
		else
		{
			*FrontPtr = *FrontPtr + 1;
		}
	}
	
	/*Return the First element of Queue*/
	return FrontElement;
}

int CircularArrayQueuePeek(int Front, int *QueueArray)
{
	/*Defining Variables*/
	int IsEmpty = CircularArrayQueueIsEmpty(Front);
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

int CircularArrayQueueSize(int Front, int Rear, int Size)
{
	/*Defining Variables*/
	int QueueSize;
	
	if(Front == -1)
	{
		QueueSize = 0;
	}
	else if(Rear >= Front)
	{
		QueueSize = Rear - Front + 1;
	}
	else if(Front > Rear)
	{
		QueueSize = (Size - Front) + (Rear + 1);
	}
	
	/*Return StackSize*/
	return QueueSize;
}

void CircularArrayQueueDisplay(int Front, int Rear, int Size, int *QueueArray)
{
	/*Defining Variables*/
	int i;
	int IsEmpty = CircularArrayQueueIsEmpty(Front);

	if(IsEmpty != 1)
	{
		/*if the Rear precedes the Front*/
		if(Rear >= Front)
		{
			/*Pirnting the queue elements*/
			for(i = Front; i <= Rear; i++)
			{
				printf("%d\t", QueueArray[i]);
			}	
		}
		
		/*Else if the Front precedes the Rear*/
		else if(Rear < Front)
		{
			/*Pirnting the queue elements*/
			for(i = Front; i < Size; i++)
			{
				printf("%d\t", QueueArray[i]);
			}	

			for(i = 0; i <= Rear; i++)
			{
				printf("%d\t", QueueArray[i]);
			}
		}
		
		/*Printing New Line*/
		printf("\n");
	}
}