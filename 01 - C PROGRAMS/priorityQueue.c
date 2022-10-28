#include <stdio.h>
void enque();
void deque();
void display();
int n;
int front = -1;
int rear = -1;

struct priorityqueue
{
    int item;
    int priority;

} A[100];

void main()
{
    int flag = 0, ch;
    printf("Enter size of priority queue:");
    scanf("%d", &n);
    while (flag == 0)
    {
        printf("\n1.ENQUE\n2.DEQUE\n3.DISPLAY\n4.EXIT\n");
        printf("\nEnter a choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            flag = 1;
            break;
        default:
            printf("INVALID CHOICE");
            break;
        }
    }
}

void enque()
{
    int i, loc, ele, prio;
    printf("Enter item to insert:");
    scanf("%d", &ele);
    printf("Enter priority of item:");
    scanf("%d", &prio);
    if (front == 0 && rear == n - 1)
        printf("\nQUEUE IS FULL\n");
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        A[rear].item = ele;
        A[rear].priority = prio;

        printf("ITEM INSERTED\n");
    }
    else if (front > 0 && rear == n - 1)
    {
        for (i = front; i <= rear; i++)
            A[i - 1] = A[i];
        front--;
        rear--;
        for (i = rear; i >= front; i--)
        {
            if (A[i].priority < prio)
                break;
        }
        loc = i + 1;
        for (i = rear; i >= loc; i--)
            A[i + 1] = A[i];
        A[loc].item = ele;
        A[loc].priority = prio;
        rear++;

        printf("ITEM INSERTED\n");
    }
    else
    {
        for (i = rear; i >= front; i--)
        {
            if (A[i].priority < prio)
                break;
        }
        loc = i + 1;
        for (i = rear; i >= loc; i--)
            A[i + 1] = A[i];
        A[loc].item = ele;
        A[loc].priority = prio;
        rear++;
        printf("ITEM INSERTED\n");
    }
}

void deque()
{
    if (front == -1 && rear == -1)
        printf("\nQUEUE IS EMPTY\n");
    else if (front == rear)
    {
        printf("DELETED ITEM: %d\n", A[front].item);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("DELETED ITEM: %d\n", A[front].item);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("QUEUE IS EMPTY");
    }
    else

        printf("QUEUE ELEMENTS:");
    for (i = front; i <= rear; i++)
    {
        printf("%d\t", A[i].item);
    }

    printf("\nPRIORITY:\t");

    for (i = front; i <= rear; i++)
    {
        printf("%d\t", A[i].priority);
    }
}
