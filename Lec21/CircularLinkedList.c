#include <stdlib.h>
#include <stdio.h>
#include "CircularLinkedList.h"

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

int CountCircularLinkedListNodes(Node_ct *LastAddress)
{
	/*Define variables*/
	int Size = 0;
	Node_ct *TempPtr = NULL;
	
	/*Validate the linked list start address*/
	if(LastAddress == NULL)
	{
		/*Do not do any thing*/
	}
	else
	{
		/*Make TempPtr point to the first element*/
		TempPtr = LastAddress -> Link;
		
		/*Increment size by passing of every element*/
		do
		{
			Size++;
			TempPtr = TempPtr -> Link;
		}
		while(TempPtr != LastAddress -> Link);
	}
	
	/*Rerurn size*/
	return Size;
}


Node_ct *InsertAtEmptyCircular(Node_ct *LastAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_ct *NewElement = NULL;
	
	/*Validate linked list Last address*/
	if(LastAddress != NULL)
	{
		printf("InsertAtEmptyCircular: This linked list is not an empty linked list!\n");
	}
	else
	{
		/*Reserve new element and insert it into the empty linked list*/
		NewElement = (Node_ct *) malloc(sizeof(Node_ct));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = NewElement;
		LastAddress = NewElement;
	}
	
	/*Return LastAddress*/
	return LastAddress;
}

void InsertAtBeginningCircular(Node_ct *LastAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_ct *NewElement = NULL;
	
	/*Validate linked list Last address*/
	if(LastAddress == NULL)
	{
		printf("InsertAtBeginningCircular: Linked List is empty!\n");
	}
	else
	{
		/*Reserve new element and insert it at beginning*/
		NewElement = (Node_ct *) malloc(sizeof(Node_ct));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = LastAddress -> Link;
		LastAddress -> Link = NewElement;
	}
}

Node_ct *InsertAtEndCircular(Node_ct *LastAddress, int InsertionNumber)
{
	/*Define variables*/
	Node_ct *NewElement = NULL;
	
	/*Validate linked list start address*/
	if(LastAddress == NULL)
	{
		printf("InsertAtEndCircular: Linked List is empty!\n");
	}
	else
	{
		/*Reserve new element and insert it at end*/
		NewElement = (Node_ct *) malloc(sizeof(Node_ct));
		NewElement -> Info = InsertionNumber;
		NewElement -> Link = LastAddress -> Link;
		LastAddress -> Link = NewElement;
		LastAddress = NewElement;
	}
	
	/*Return LastAddress*/
	return LastAddress;
}

Node_ct *InsertAfterNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber)
{
	/*Define Variables*/
	Node_ct *NewElement = NULL;
	Node_ct *TempPtr = NULL;
	int IfLast = 0;
	int IfFirst = 1;
	
	/*Validate LastAddress*/
	if(LastAddress == NULL)
	{
		printf("InsertAfterNodeCircular: Linked List is empty!\n");
	}
	else
	{
		/*Make TempPtr point to the first element*/
		TempPtr = LastAddress -> Link;
		
		/*Search for the Node to insert after*/
		do
		{
			if(TempPtr -> Info == NodeValue)
			{
				break;
			}
			else
			{
				IfFirst = 0;
				TempPtr = TempPtr -> Link;
			}
		}
		while(TempPtr != LastAddress -> Link);
		
		/*Why the loop had been breaked*/
		if((TempPtr == LastAddress -> Link) && (IfFirst == 0))
		{
			printf("InsertAfterNodeCircular: The node does not exist!\n");
		}
		else
		{
			if(TempPtr == LastAddress)
			{
				IfLast = 1;
			}
			
			/*Reserve new element and insert it after the node*/
			NewElement = (Node_ct *) malloc(sizeof(Node_ct));
			NewElement -> Info = InsertionNumber;
			NewElement -> Link = TempPtr -> Link;
			TempPtr -> Link = NewElement;
			
			/*Difference in inserting due to IfLast*/
			if(IfLast == 1)
			{
				LastAddress = NewElement;
			}
		}
	}
	
	/*Return LastAddress*/
	return LastAddress;
}

void InsertBeforeNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber)
{
	/*Define Variables*/
	Node_ct *NewElement = NULL;
	Node_ct *TempPtr = NULL;
	//int IfFirst = 1;
	
	/*Validate LastAddress*/
	if(LastAddress == NULL)
	{
		printf("InsertBeforeNodeCircular: Linked List is empty!\n");
	}
	else
	{
		/*Make TempPtr point to the first element*/
		TempPtr = LastAddress;
		
		/*Search for the Node to insert before (Searching here does not consider the first node)*/
		do
		{
			if(TempPtr -> Link -> Info == NodeValue)
			{
				break;
			}
			else
			{
				/*Move to the next element*/
				TempPtr = TempPtr -> Link;
			}
		}
		while(TempPtr != LastAddress);
		
		
		/*Why the loop had been breaked*/
		/*Also search if the first node is the node we need*/
		if((TempPtr == LastAddress) && (LastAddress -> Link -> Info != NodeValue))
		{
			printf("InsertBeforeNodeCircular: The node does not exist!\n");
		}
		else
		{
			/*Reserve new element and insert it before the node*/
			NewElement = (Node_ct *) malloc(sizeof(Node_ct));
			NewElement -> Info = InsertionNumber;
			NewElement -> Link = TempPtr -> Link;
			TempPtr -> Link = NewElement;
		}
	}
}


Node_ct *DeleteFromLinkedListCircular(Node_ct *LastAddress, int DeletedElement)
{
	/*Define variables*/
	Node_ct *TempPtr = NULL, *DeletedTemp = NULL;
	int DeletedIndex = 0;
	
	/*Validate linked list start address*/
	if(LastAddress == NULL)
	{
		printf("DeleteFromLinkedListCircular: Linked List is empty!\n");
	}
	else 
	{
		/*Make TempPtr point to the Last element*/
		TempPtr = LastAddress;

		/*Search for the deleted element into the linked list*/
		do
		{
			/*Increment the deleted node index*/
			DeletedIndex++;
			
			if(TempPtr -> Link -> Info == DeletedElement)
			{
				break;
			}
			else 
			{
				TempPtr = TempPtr -> Link;
			}
		}
		while(TempPtr != LastAddress);
		
		/*Why the loop had been breaked*/
		/*Validate if the deleted element is the first element or not*/
		if((TempPtr == LastAddress) && (LastAddress -> Link -> Info != DeletedElement))
		{
			printf("DeleteFromLinkedList: The Element you entered is not exist!\n");
		}
		
		/*The node is exist and we should delete it*/
		else
		{
			/*If the deleted element is the first element or is the only element*/
			if(TempPtr == LastAddress)
			{
				/*If the element is the only element*/
				if(TempPtr -> Link == TempPtr)
				{
					/*Return Null as the LastAddress and free the deleted element*/
					LastAddress = NULL;
					free(TempPtr);
				}
				
				/*Else the element is the first element only*/
				else
				{
					/*Fix the linkage and free the deleted element*/
					DeletedTemp = TempPtr -> Link;
					LastAddress -> Link = LastAddress -> Link -> Link;
					free(DeletedTemp);
				}
			}
			
			/*The node is the last node*/
			else if(TempPtr -> Link == LastAddress)
			{
				/*Fix the linkage and free the deleted element*/
				DeletedTemp = TempPtr -> Link;
				TempPtr -> Link = LastAddress -> Link;
				LastAddress = TempPtr;
				free(DeletedTemp);
			}
			
			/*The node in between elements*/
			else
			{
				/*Fix the linkage and free the deleted element*/
				DeletedTemp = TempPtr -> Link;
				TempPtr -> Link = TempPtr -> Link -> Link;
				free(DeletedTemp);
			}
		}
	}
	
	/*Return linked list start address*/
	return LastAddress;
}