#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkedList.h"

/*Functions' Prototypes*/
/*Fuction to initialize a stack of array*/
void ArrayStackInit(int *Top);
/*Fuction to check if the stack of array is full*/
int ArrayStackIsFull(int Top, int Size);
/*Fuction to check if the stack of array is empty*/
int ArrayStackIsEmpty(int Top, int Size);
/*Function to push into a stack of array*/
void ArrayStackPush(int *Top, int Size, int *StackArray, int NewElement);
/*Function to pop from a stack of array*/
int ArrayStackPop(int *Top, int Size, int *StackArray);
/*Function to peek from a stack or array*/
int ArrayStackPeek(int Top, int Size, int *StackArray);
/*Function to return number of array stack elements*/
int ArrayStackSize(int Top);
/*Function to display array stack elements*/
void ArrayStackDisplay(int Top, int *StackArray);

/*Fuction to initialize a stack of linked list*/
void LinkedListStackInit(Node_t **TopPtr);
/*Fuction to check if the stack of linked list is empty*/
int LinkedListStackIsEmpty(Node_t *Top);
/*Function to push into a stack of linked list*/
void LinkedListStackPush(Node_t **TopPtr, int NewElement);
/*Function to pop from a stack of linked list*/
int LinkedListStackPop(Node_t **TopPtr);
/*Function to peek from a stack or linked list*/
int LinkedListStackPeek(Node_t *Top);
/*Function to return number of linked list stack elements*/
int LinkedListStackSize(Node_t *Top);
/*Function to display linked list stack elements*/
void LinkedListStackDisplay(Node_t *Top);

/*Test Functions*/
void ArrayStackTest();
void LinkedListStackTest();



/*It is the main*/
int main()
{
	/*Copy code below to test functions*/
	LinkedListStackTest();
	
	/*Returning to the operating system*/
	return 0;

}

void LinkedListStackTest()
{
	/*Defining Variables*/
	int NewElement;
	int StackSize;
	int PeekElement;
	
	Node_t *Top = NULL;
	
	/*Stack Initialization*/
	LinkedListStackInit(&Top);
	
	/*Push elements*/
	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	LinkedListStackPush(&Top, NewElement);
	LinkedListStackDisplay(Top);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	LinkedListStackPush(&Top, NewElement);
	LinkedListStackDisplay(Top);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	LinkedListStackPush(&Top, NewElement);
	LinkedListStackDisplay(Top);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	LinkedListStackPush(&Top, NewElement);
	LinkedListStackDisplay(Top);
	
	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	LinkedListStackPush(&Top, NewElement);
	LinkedListStackDisplay(Top);

	/*Peek Operation*/
	PeekElement = LinkedListStackPeek(Top);
	printf("Peek: %d\n", PeekElement);
	/*Printing Number of Stack Elements*/
	StackSize = LinkedListStackSize(Top);
	printf("Number of elements is: %d\n", StackSize);

	/*Pop Elements*/
	LinkedListStackPop(&Top);
	LinkedListStackDisplay(Top);
	LinkedListStackPop(&Top);
	LinkedListStackDisplay(Top);
	LinkedListStackPop(&Top);
	LinkedListStackDisplay(Top);
	LinkedListStackPop(&Top);
	LinkedListStackDisplay(Top);
		LinkedListStackPop(&Top);
	LinkedListStackDisplay(Top);

	/*Printing Number of Stack Elements*/
	StackSize = LinkedListStackSize(Top);
	printf("Number of elements is: %d\n", StackSize);
		
	/*Peek Operation*/
	PeekElement = LinkedListStackPeek(Top);
	printf("Peek: %d\n", PeekElement);
}

void ArrayStackTest()
{
	/*Defining Variables*/
	int StackArray[4];
	int Size = 4;
	int Top;
	int NewElement;
	int StackSize;
	int PeekElement;
	
	/*Stack Initialization*/
	ArrayStackInit(&Top);
	
	/*Push elements*/
	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	ArrayStackPush(&Top, Size, StackArray, NewElement);
	ArrayStackDisplay(Top, StackArray);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	ArrayStackPush(&Top, Size, StackArray, NewElement);
	ArrayStackDisplay(Top, StackArray);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	ArrayStackPush(&Top, Size, StackArray, NewElement);
	ArrayStackDisplay(Top, StackArray);

	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	ArrayStackPush(&Top, Size, StackArray, NewElement);
	ArrayStackDisplay(Top, StackArray);
	
	printf("Please Enter an element to push: ");
	scanf("%d", &NewElement);
	ArrayStackPush(&Top, Size, StackArray, NewElement);
	ArrayStackDisplay(Top, StackArray);

	/*Peek Operation*/
	PeekElement = ArrayStackPeek(Top, Size, StackArray);
	printf("Peek: %d\n", PeekElement);

	/*Pop Elements*/
	ArrayStackPop(&Top, Size, StackArray);
	ArrayStackDisplay(Top, StackArray);
	ArrayStackPop(&Top, Size, StackArray);
	ArrayStackDisplay(Top, StackArray);
	ArrayStackPop(&Top, Size, StackArray);
	ArrayStackDisplay(Top, StackArray);
	ArrayStackPop(&Top, Size, StackArray);
	ArrayStackDisplay(Top, StackArray);
	ArrayStackPop(&Top, Size, StackArray);
	ArrayStackDisplay(Top, StackArray);
	
	/*Printing Number of Stack Elements*/
	StackSize = ArrayStackSize(Top);
	printf("Number of elements is: %d\n", StackSize);
		
	/*Peek Operation*/
	PeekElement = ArrayStackPeek(Top, Size, StackArray);
	printf("Peek: %d\n", PeekElement);

}

void ArrayStackInit(int *Top)
{
	/*Initializing Top*/
	*Top = -1;
}

int ArrayStackIsFull(int Top, int Size)
{
	/*Defining Variables*/
	int IsFull;
	
	/*Check if the stack is full*/
	if(Top == (Size - 1))
	{
		IsFull = 1;
	}
	else
	{
		IsFull = 0;
	}
	
	/*Return State of the stack*/
	return IsFull;
}

int ArrayStackIsEmpty(int Top, int Size)
{
	/*Defining Variables*/
	int IsEmpty;

	/*Check if the stack is full*/
	if(Top == -1)
	{
		IsEmpty = 1;
	}
	else
	{
		IsEmpty = 0;
	}
	
	/*Return State of the stack*/
	return IsEmpty;
}

void ArrayStackPush(int *TopPtr, int Size, int *StackArray, int NewElement)
{
	/*Defining Variables*/
	int IsFull = ArrayStackIsFull(*TopPtr, Size);
	
	/*Check is the stack is full*/
	if(IsFull == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Push Operation*/
		*TopPtr = *TopPtr + 1;
		StackArray[*TopPtr] = NewElement;
	}
}

int ArrayStackPop(int *TopPtr, int Size, int *StackArray)
{
	/*Defining Variables*/
	int IsEmpty = ArrayStackIsEmpty(*TopPtr, Size);
	int TopElement;
	
	/*Check is the stack is empty*/
	if(IsEmpty == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Pop Operation*/
		TopElement = StackArray[*TopPtr];
		*TopPtr = *TopPtr - 1;
	}
	
	/*Return the last element of stack*/
	return TopElement;
}

int ArrayStackPeek(int Top, int Size, int *StackArray)
{
	/*Defining Variables*/
	int IsEmpty = ArrayStackIsEmpty(Top, Size);
	int TopElement = 0;
	
	/*Check is the stack is empty*/
	if(IsEmpty == 1)
	{
		/*Do nothing*/
	}
	else
	{
		/*Return Last Stack Element*/
		TopElement = StackArray[Top];
	}
	
	/*Return the last element of stack*/
	return TopElement;
}

int ArrayStackSize(int Top)
{
	/*Defining Variables*/
	int StackSize = Top + 1;
	
	/*Return StackSize*/
	return StackSize;
}

void ArrayStackDisplay(int Top, int *StackArray)
{
	/*Defining Variables*/
	int i;
	
	if(Top != -1)
	{
		
		/*Pirnting the stack elements*/
		for(i = Top; i >= 0; i--)
		{
			printf("%d\t", StackArray[i]);
		}
		
		/*Printing New Line*/
		printf("\n");
	}
}

void LinkedListStackInit(Node_t **TopPtr)
{
	/*Validate the address*/
	if(TopPtr == NULL)
	{
		/*Do no thing*/
	}
	else 
	{
		/*Initializing Top*/
		*TopPtr = NULL;
	}
}

int LinkedListStackIsEmpty(Node_t *Top)
{
	/*Defining Variables*/
	int IsEmpty;
	
	/*Check Stack State*/
	if(Top == NULL)
	{
		IsEmpty = 1;
	}
	else 
	{
		IsEmpty = 0;
	}
		
	/*Returning Stack State*/
	return IsEmpty;
}

void LinkedListStackPush(Node_t **TopPtr, int NewElement)
{
	/*Do not Validate the address because sometimes the linked list maybe empty*/
	/*Push Operation*/
	*TopPtr = InsertAtBeginning(*TopPtr, NewElement);
}

int LinkedListStackPop(Node_t **TopPtr)
{
	/*Defining Variables*/
	int IsEmpty;
	int TopElement;
	Node_t *Top = NULL;

	/*Validate the address*/
	if(*TopPtr != NULL)
	{
		/*Getting Top Address*/
		Top = *TopPtr;
		
		/*Check if the stack is empty or not*/
		IsEmpty = LinkedListStackIsEmpty(Top);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Pop Operation*/
			TopElement = Top -> Info;
			*TopPtr = DeleteFromLinkedList(Top, TopElement);
		}
	}
	
	/*Return the last element of stack*/
	return TopElement;
}
int LinkedListStackPeek(Node_t *Top)
{
	/*Defining Variables*/
	int TopElement = 0;
	int IsEmpty;
	
	/*Validate the address*/
	if(Top != NULL)
	{
		/*Check if the stack is empty*/
		IsEmpty = LinkedListStackIsEmpty(Top);
		
		if(IsEmpty == 1)
		{
			/*Do nothing*/
		}
		else
		{
			/*Return Last Stack Element*/
			TopElement = Top -> Info;
		}
		
	}
	
	/*Return the last element of stack*/
	return TopElement;

}

int LinkedListStackSize(Node_t *Top)
{
	/*Defining Variables*/
	int StackSize;
	
	/*Calculate the size*/
	if(Top == NULL)
	{
		StackSize = 0;
	}
	else
	{
		/*Get Stack Size*/
		StackSize = CountLinkedListNodes(Top);				
	}
	
	/*Return Stack Size*/
	return StackSize;
}

void LinkedListStackDisplay(Node_t *Top)
{
	/*Validate the address*/
	if(Top != NULL)
	{
		/*Display Stack Elements*/
		DisplayLinkedList(Top);
	}
}
