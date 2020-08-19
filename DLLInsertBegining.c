/*
    #insert element at begining:
*/
#include<stdio.h>
#include<stdlib.h>
struct DLLInsert
{
    int data ;
    struct DLLInsert *prev;
    struct DLLInsert *next;
}*first = NULL;
void create(int n)
{   int num,i;
    struct DLLInsert *head,*temp;
    first =(struct DLLInsert *)malloc(sizeof(struct DLLInsert));
    if (first == NULL)
    {
        printf("Not Allocated !!!");
        return;
    }
    else
    {
        printf("Enter data 1: ");
        scanf("%d",&num);
        first->data=num;
        first->prev=NULL;
        first->next=NULL;
        head = first;
    }
    for ( i = 2; i <= n; i++)
    {
        temp = (struct DLLInsert * )malloc(sizeof(struct DLLInsert));
        if (temp == NULL)
        {
            printf("NOT Allocated !!!");
            return;
        }
        else
        {
            printf("Enter data %d: ",i);
            scanf("%d",&num);
            temp->data=num;
            temp->next=NULL;
            temp->prev=head;
            head->next=temp;
            head=temp;
        }
    }
    return;
}
void Insert(int value)
{   
    struct DLLInsert *newNode;
    newNode = (struct DLLInsert *)malloc(sizeof(struct DLLInsert));
    if (!newNode)
    {
        printf("Memory Error !!!");
        exit -1;
    }
    else
    {       newNode->data=value;
            newNode->prev=NULL;
            newNode->next=first;
            first->prev=newNode;
            first=newNode;
    }
    return;
}
void Display()
{
    struct DLLInsert *head = first;
    
    while (head != NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return;
}
int main()
{   
    int size,element,postion;
    printf("Enter the size of List: ");
    scanf("%d",&size);
    create(size);
    printf("\n");
    Display();
    printf("\n");
    printf("Enter the element for Insert:   ");
    scanf("%d",&element);
    Insert(element);
    printf("\n");
    Display();

    return 0;
}



