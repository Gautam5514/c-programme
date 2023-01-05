#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
        
    }
    
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second =  (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
//link first and second node
    head->data = 7;
    head->next = second;
//link second and third
    second->data = 11;
    second->next = third;
//link third and fourth
    third->data = 32;
    third->next = fourth;
//terminate the list at third nodes
    fourth->data = 42;
    fourth->next = NULL;
//call
    linkedlistTraversal(head);
    return 0;
}