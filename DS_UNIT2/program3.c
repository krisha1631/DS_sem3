#include<stdio.h>
#define MAX 5
int stack [MAX];
int top=-1;
void push(int value)
{
if(top == MAX-1)
printf("\nstack overflow");
else
{
top++;
stack [top] = value;
}
}
void peek()
{

    if(top == -1)
        printf("\nstack underflow");
    else
        printf("\ntop element = %d",stack[top]);
}
void main()
{

    push(10);
    push(20);
    push(30);
    peek();
    getch();
}
