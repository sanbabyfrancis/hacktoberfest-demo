#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
void insert(int num)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    // create new node
    ptr->data = num;
    ptr->next = head;
    head = ptr;
    display();
}
void main()
{
    int choice;
    do
    {
        int num;
        printf("Enter the number to insert: ");
        scanf("%d", &num);
        insert(num);
        printf("\nEnter 0 to enter more | Press any other number to quit: ");
        scanf("%d", &choice);
    } while (choice == 0);
}