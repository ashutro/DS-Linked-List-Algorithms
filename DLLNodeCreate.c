/*
    #Create the doubly linked list:
*/
#include<stdio.h>
#include<stdlib.h>
struct DLLNode{
    int data;
    struct DLLNode *prev;
    struct DLLNode *next;
}*first = NULL;
void DLLCreate(int n)
{   int num;
    struct DLLNode *head,*temp;
    first = (struct DLLNode *)malloc(sizeof(struct DLLNode));
    if (first == NULL)
    {
        printf("Not allocated !!!"); // if memory error occur !!!
        return;
    }
    else
    {
        printf("Enter data 1: ");
        scanf("%d",&num);
        first->data=num;
        first->prev=NULL;
        first->next=NULL;
        head=first; // pointing gead to new node
    }
    for (int i = 2; i <=n; i++)
    {
        temp = (struct DLLNode *)malloc(sizeof(struct DLLNode));
        if (temp == NULL)
        {
            printf("Not Allocated !!!"); // if memory error occur !!!
            return;
        
        }
        else
        {
            printf("Enter data %d: ",i);
            scanf("%d",&num);
            temp->data=num;
            temp->next=NULL; // new node next pointing to null
            temp->prev=head; // linking the new node prev to last node in linked-list where head pointing
            head->next=temp; // linking the prev node to new temp node
            head=temp; // changing the head pointing loction for next node inserting
        }
    }
}
void display()
{
    struct DLLNode *head = first;
    while (head != NULL)
    {
        printf("%d  ",head->data);
        head=head->next; // changing head pointing loction every time the element is print:
    }
    return;
}
int main()
{
    int x;
    printf("Enter size of the Linked List:  ");
    scanf("%d",&x);
    DLLCreate(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    display();
    return 0;
}

