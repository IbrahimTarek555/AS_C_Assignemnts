#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkedList.h"

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