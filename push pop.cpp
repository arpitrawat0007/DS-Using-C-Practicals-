#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=-1;

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if(isFull())
    {
        printf("\nSTACK OVERFLOW");
        return;
    }
    top++;
    stack[top]=data;
}


int pop()
{
    if(isEmpty())
    {
        printf("\nSTACK UNDERFLOWS");
        exit(1);
    }
    int value=stack[top];
    top=top-1;
    return value;
}

void print()
{
    if(isEmpty())
    {
        printf("\nStack is empty:");
        return;
    }
    for(int i=top; i>=0; i--)
        printf("%d  ",stack[i]);
    printf("\n");
}

int peek()
{
    if(isEmpty())
    {
        printf("\nStack underflow:");
        exit(1);
    }
    return stack[top];
}

int main()
{
    int choice,data;
    printf("ARRAY IMPLEMENTATION OF STACK:");
    while(1)
    {
        printf("\n1->push:\n2->pop:\n3->Print top element:\n4->Print all elements:\n5->Quit:");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",& choice);

        switch(choice)
        {
        case 1:
            printf("\nEnter the element to be pushed:");
            scanf("%d",&data);
            push(data);
            printf("%d element is pushed\n",data);
            break;

        case 2:
            data=pop();
            printf("Deleted element is %d\n",data);
            break;

        case 3:
            printf("Top element of stack is %d\n",peek());
            break;

        case 4:
            printf("All the Elements in Stack\n");
            print();
            break;

        case 5:
            exit(1);

        default:
            printf("Wrong choice:\n");
        }
    }
    return 0;
}