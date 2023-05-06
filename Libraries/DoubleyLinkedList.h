#ifndef DOUBLEYLINKEDLIST_H_
#define DOUBLEYLINKEDLIST_H_

/*Doubley Linked List Node Definition*/
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
/*A function to reverse a Doubley linked list*/
Node_dt *ReverseDoubleyLinkedList(Node_dt *StartAddress);

#endif
