#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

#define SIZE 1000


void push(int *array, int *top, int newElement)
{
    if(*top == SIZE - 1)
    {
        printf("Stack Overflow");
    }

    else
    {
        array[*top+1] = newElement;
    }
    (*top)++;
}

int pop(int *array, int *top)
{
    if(*top == -1)
    {
        printf("The stack is empty");
        return;
    }
    else
    {
        (*top)--;
        return array[*top+1];
    }

}

bool isEmpty(int *top)
{
    if(*top == -1)
    {
        return true;
    }

    else
        return false;
}

int topElement(int *array, int *top)
{
    if(*top == -1)
    {
        printf("The array is empty\n");
        return;
    }

    return array[*top];
}

void printStack(int *array, int *top)
{
    for(int i = 0; i <= *top; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int size(int top)
{
    return (top+1);
}

int main()
{
    int array[SIZE];
    int *top = malloc(sizeof(int));
    *top = -1;
    push(array, top, 5);
    push(array, top, 10);
    push(array, top, 15);
    push(array, top, 20);
    push(array, top, 25);
    printStack(array, top);

    pop(array, top);
    printStack(array, top);

    return 0;
}
