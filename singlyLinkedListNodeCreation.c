#include <stdio.h>
struct node
{
    struct node *link;
    int data;
};
struct node *head, *newNode;
void create()
{
    int item;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter element");
    scanf("%d", &item);
    //  create new node
    newNode->data = item;
    newNode->link = head;
    head = newNode;
}
void main()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
}