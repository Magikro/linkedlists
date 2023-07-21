#include"node.h"
#include <stdio.h>

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


    return 0;
}

void travList(struct node *head)
{
printf("Current node: " + head->data);

}