#include"node.h"
#include <stdio.h>
#include <stdlib.h>


void travList(struct node *head)
{
    while ( head->next != NULL )
    {
        printf("Current node: %d\n", head->data);
        head = head->next;
    }
        printf("Current node: %d\n", head->data);

    while ( head->prev != NULL )
    {
        head = head->prev;
        printf("Current node: %d\n", head->data);
    }

}

void insertStart(int dater, struct node **head)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));

    newNode->data = dater;

    newNode->prev = NULL;
    newNode->next = (*head);
    if ((*head) != NULL)
    {
        (*head)->prev = newNode;
    }
    (*head) = newNode;
    printf("node %d added to the front.\n", newNode->data);
}

void insertEnd(int dater, struct node *head)
{

    struct node *newNode = (struct node*) malloc(sizeof(struct node));

    newNode->data = dater;


    while ( head->next != NULL )
    {
        head = head->next;
    }

    head->next = newNode;
    newNode->prev = head;
    newNode->next = NULL;
    printf("node %d added to the end.\n", newNode->data);
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    
    one  = malloc(sizeof(struct node));
    two  = malloc(sizeof(struct node));
    three  = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    head = one;

    insertStart(0 , &head);
    insertEnd(15, head);
    insertStart(-1, &head);
    

    travList(head);

    return 0;
}

