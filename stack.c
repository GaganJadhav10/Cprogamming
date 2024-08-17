#include <stdio.h>
#include <stdlib.h>
#define max 10

int st[max], top = -1;

void push(int st[], int val)
{
    if (top == max - 1)
        printf("\n stack overflow");
    else
    {
        top++;
        st[top] = val;
    }
}

void display(int st[])

{
    if (top == -1)
        printf("stack is empty");
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d\n", st[i]);
    }
}

int pop(int st[])
{
    if (top == -1)
    {
        printf("underflow");
        return -1;
    }
    else
        return st[top--];
}

int peek(int st[])
{
    if (top == -1)
    {
        printf("underflow");
        return -1;
    }
    else
        return st[top];
}

int main()
{
    int ch, val;
    while (ch != 5)
    {
        printf("\nenter the choice\n");
        printf("1 Push\n");
        printf("2 pop\n");
        printf("3 peek\n");
        printf("4 display\n");
        printf("5 exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n the value to be pushed in stack is ");
            scanf("%d", &val);
            push(st, val);
            break;
        case 2:
            val = pop(st);
            if (val != -1)
                printf("\n the values deleted from stack is %d", val);
            break;
        case 3:
            val = peek(st);
            if (val != 1)
                printf("\n the value stored at top of stack is %d", val);
            break;
        case 4:
            display(st);
            break;
        case 5:
            return 0;
            break;
        }
    }
}