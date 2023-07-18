#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack overflow because of %d\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int  pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int main()
{
    struct stack *sp;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack is created\n");

    printf("Before %d\n", isEmpty(sp));
    printf("Before %d\n", isFull(sp));

    push(sp, 56);
    push(sp, 6);
    push(sp, 45);
    push(sp, 80);

    printf("POP:  %d\n", pop(sp));
    printf("POP:  %d\n", pop(sp));
    printf("POP:  %d\n", pop(sp));
    printf("POP:  %d\n", pop(sp));
    printf("POP:  %d\n", pop(sp));

    printf("After %d\n", isEmpty(sp));
    printf("After %d\n", isFull(sp));

    return 0;
}
