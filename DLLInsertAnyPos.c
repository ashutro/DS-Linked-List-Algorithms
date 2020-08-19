/* 
        #doubly linked list insert node at any position
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
void Insert(int value,int pos)
{   
    struct DLLInsert *newNode,*temp;
    newNode = (struct DLLInsert *)malloc(sizeof(struct DLLInsert));
    if (newNode == NULL)
    {
        printf("Memory Error !!!");
        return;
    }
    newNode->data=value;
    if (pos == 1)
    {
            newNode->prev=NULL;
            newNode->next=first;
            first->prev=newNode;
            first=newNode;
            return;
    }
    else if(pos > 1)
    {
            temp = first;
     for(int i = 1; i < pos-1 && temp; i++)
        {
            temp=temp->next;
            
        }
        if (!temp)
        {
            printf("Out of bound !!!\n");
            return;
        }
        else if(temp)
        {
            newNode->next=temp->next;
            newNode->prev=temp;
            if (temp->next)
            {
                temp->next->prev=newNode;
            }
            temp->next=newNode;
        }
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
    printf("Enter the Postion:  ");
    scanf("%d",&postion);
    Insert(element,postion);
    printf("\n");
    Display();

    return 0;
}



