#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    char *arr;
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

void push(struct stack *ptr, char value)
{
    if (isFull(ptr))
    {
        printf("Stack overflow because of \n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct stack* ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int  para(char * exp){
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i =0; exp[i]!='\0' ; i++)
    {
        if(exp[i]=='('){
            push(sp,'(');          
        }
        else if (exp[i] == ')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);

        }

    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
char *exp = "8*(9)";
   if(para(exp)){
    printf("parenthesis are in order");
   }
   else {
    printf("parenthesis are not  in order");

   }

    return 0;
}
