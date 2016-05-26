#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node{
	char data;
	int timestamp;
	struct Node *next;
}Node_t;


typedef struct LinkedList{
	Node_t *head;
	Node_t *tail;
}LinkedList_t;

LinkedList_t *createList();

void deleteList(LinkedList_t *list);

Node_t *createNodeAtHead(LinkedList_t *list, char data, int timestamp);

Node_t *createNodeAtTail(LinkedList_t *list, char data, int timestamp);

void printList(LinkedList_t *list);

int getListLength(LinkedList_t *list);

#endif