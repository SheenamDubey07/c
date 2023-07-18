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

    printf("After %d\n", isEmpty(sp));
    printf("After %d\n", isFull(sp));

    return 0;
}
