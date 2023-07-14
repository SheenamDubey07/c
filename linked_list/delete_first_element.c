#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void print(struct Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deletefirst(struct Node * head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return(head);
}

int main (){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    head = (struct Node *)malloc(sizeof (struct Node));
    second = (struct Node *)malloc(sizeof (struct Node));
    third = (struct Node *)malloc(sizeof (struct Node));
    fourth = (struct Node *)malloc(sizeof (struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    // print(head);
    head = deletefirst(head);
    printf("\nLinked List After Deletion:\n");
    print(head);

   
    return 0;
}
