#ifndef CIRCULARLINKEDLIST_H_
#define CIRCULARLINKEDLIST_H_

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
/*A function to count a linked list elements*/
int CountCircularLinkedListNodes(Node_ct *LastAddress);
/*A function to insert an element at an empty linked list*/
Node_ct *InsertAtEmptyCircular(Node_ct *LastAddress, int InsertionNumber);
/*A function to insert an element at the beginning of a linked list and return the linked list adress after isertion*/
void InsertAtBeginningCircular(Node_ct *LastAddress, int InsertionNumber);
/*A function to insert an element at the end of a linked list*/
Node_ct *InsertAtEndCircular(Node_ct *LastAddress, int InsertionNumber);
/*A function to insert a node after a node*/
Node_ct *InsertAfterNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber);
/*A function to insert a node before a node*/
void InsertBeforeNodeCircular(Node_ct *LastAddress, int NodeValue, int InsertionNumber);
/*A function to delete an element from a linked list*/
Node_ct *DeleteFromLinkedListCircular(Node_ct *StartAddress, int DeletedElement);

#endif
