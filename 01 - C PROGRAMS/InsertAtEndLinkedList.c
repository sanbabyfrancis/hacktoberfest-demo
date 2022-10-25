#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int display()
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
int insert(int num)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *temp;
    ptr->data = num;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
        display();
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = ptr->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        display();
    }
}
int main()
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