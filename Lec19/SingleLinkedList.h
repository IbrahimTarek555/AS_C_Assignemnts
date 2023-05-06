#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

/*Single Linked List Node Definition*/
typedef struct Node
{
	int Info;
	struct Node *Link;
}Node_t;

/*Functions' Prototypes*/
/*A function to reserve a linked list with Size elements and return the first element Adress*/
Node_t *CreateLinkedList(int Size);
/*A function to display a linked list*/
void DisplayLinkedList(Node_t *StartAddress);
/*A function to scan a linked list*/
void ScanLinkedList(Node_t *StartAddress);
/*A function to count a linked list elements*/
int CountLinkedListNodes(Node_t *StartAdress);
/*A function to search a number through a linked list*/
int SearchLinkedList(Node_t *StartAdress, int SearchNumber);
/*A function to insert an element at the beginning of a linked list and return the linked list adress after isertion*/
Node_t *InsertAtBeginning(Node_t *StartAdress, int InsertionNumber);
/*A function to insert an element at the end of a linked list*/
void InsertAtEnd(Node_t *StartAdress, int InsertionNumber);
/*A function to insert a node after a node*/
void InsertAfterNode(Node_t *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node before a node*/
Node_t *InsertBeforeNode(Node_t *StartAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node at a given position*/
Node_t *InsertAtPosition(Node_t *StartAddress, int NodeIndex, int InsertionNumber);
/*A function to delete an element from a linked list*/
Node_t *DeleteFromLinkedList(Node_t *StartAddress, int DeletedElement);
/*A function to reverse a linked list*/
Node_t *ReverseLinkedList(Node_t *StartAddress);
/*A function to reverse a linked list (Bad Implementation)*/
Node_t *ReverseLinkedList1(Node_t *StartAddress);

#endif
