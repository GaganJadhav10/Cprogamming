#include <stdio.h>
#include <stdlib.h>
#define max 10

int q[max], rear = -1, front = -1;

void enqueue(int q[], int val)
{
    if (rear == max - 1)
        printf("\n queue overflow");
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        q[rear] = val;
    }
}

void display(int q[])

{
    if (front == -1)
        printf("stack is empty");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d\n", q[i]);
    }
}

int dequeue(int q[])
{
    if (front == -1 || front > rear)
    {
        printf("underflow");
        return -1;
    }
    else
    {
        int ele = q[front];
        front++;
        return ele;
    }
}

int peek(int st[])
{
    if (front == -1)
    {
        printf("underflow");
        return -1;
    }
    else
        return st[front];
}

int main()
{
    int ch, val;
    while (ch != 5)
    {
        printf("\nenter the choice\n");
        printf("1 enqueue\n");
        printf("2 dequeue\n");
        printf("3 peek\n");
        printf("4 display\n");
        printf("5 exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n the value to be pushed in queue is ");
            scanf("%d", &val);
            enqueue(q, val);
            break;
        case 2:
            val = dequeue(q);
            if (val != -1)
                printf("\n the values deleted from stack is %d", val);
            break;
        case 3:
            val = peek(q);
            if (val != 1)
                printf("\n the value stored at top of stack is %d", val);
            break;
        case 4:
            display(q);
            break;
        case 5:
            return 0;
            break;
        }
    }
}