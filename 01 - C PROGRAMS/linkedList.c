#include<stdio.h>
//Define structure for each node of a linked list.
struct node
{
    int data; // Holds the data.
    struct node *next; //Holds the pointer to the next node.
};
struct node *head, *newnode, *prev, *nextnode, *temp; //Pointers needed for operations.

//Function to add a node at the beginning.
void addbeg()
{
    int item;
    printf("\nEnter the item: ");
    scanf("%d",item);
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nCannot add");
    }
    else
    {
        newnode->next = head->next;
        newnode->data = item;
        head->next = newnode;
    }
    printf("\nAdded at beginning");
}
//Function to add a node at the end.
void addend()
{
     int item;
    printf("\nEnter the item: ");
    scanf("%d",item);
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nCannot add");
    }
    else
    {
        if(head->next==NULL)
        {
            newnode->next = head->next;
            newnode->data = item;
            head->next = newnode;
        }
        else
        {
            temp  = head->next;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            newnode->data = item;
            temp->next = newnode;
        }
    }
}
//Function to add a node after a node with a particular data value.
void addany()
{
    int key,item;
    printf("\nEnter the data and key after which data is to be entered: ");
    scanf("%d %d",&item,&key);
    newnode = (struct node*)malloc(sizeof(struct node));
    prev = head->next;
    while((prev->data!=key)&&(prev->next!=NULL))
    {
        prev = prev->next;
    }
    newnode->next = prev->next;
    newnode->data = item;
    prev->next = newnode;
}
//Function to delete from the beginning.
void delbeg()
{
    if(head->next==NULL){
        printf("\nEmpty");
    }
    else
    {
        newnode = head->next;
        head->next = newnode->next;
        free(newnode);
    }
}
//Function to delete from the end.
void delend()
{
    
    if(head->next==NULL){
        printf("\nEmpty");
    } 
    else
    {
        prev = head;
        nextnode = head->next;
        while(nextnode->next!=NULL)
        {
            prev = prev->next;
            nextnode = nextnode->next;
        }
        prev->next = NULL;
        free(nextnode);
    }  
}
//Function to delete a node with a particular data value.
void delany()
{
    int key;
	if(head->next==NULL)
	{
		printf("\nEmpty");
	}
	else
	{
		printf("\nEnter data to be deleted: ");
		scanf("%d",&key);
        prev = head;
        nextnode = head->next;
        while(nextnode->data!=key)
        {
            prev = prev->next;
            nextnode = nextnode->next;
        }
        prev->next = nextnode->next;
        free(nextnode);
    }
}
//Driver function.
void main()
{
    int i;
    head = (struct node*)malloc(sizeof(struct node)); //Dynamic allocation using malloc().
    head->next = NULL;
    while(1)
    {
        printf("1. Insertion at beginning\n2. Insertion at end\n3. Insert anywhere\n4. Delete from beginning\n5. Delend\n6. Delany\n7. Display\n8. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                addbeg();
                break;
            case 2:
                addend();
                break;
            case 3:
                addany();
                break;
            case 4:
                delbeg();
                break;
            case 5:
                delend();
                break;
            case 6:
                delany();
                break;
            case 7:
                display();
                break;
            default:exit(0);
        }
    }
}
