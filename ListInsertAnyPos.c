/* 
        #linked list insert node at any position
*/
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
}*first = NULL;
void create(int n)
{
    struct Node *t,*head;
    int num,i;
    first = (struct Node *)malloc(sizeof(struct Node));
    if (first == NULL)
    {
        printf("Not allocted !!! ");
    }
    else
    {
        
        printf("Enter the data node 1: ");
        scanf("%d",&num);
        first->data = num;
        first->next=NULL;
        head = first;
    }
    for ( i = 2; i <= n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        if (t==NULL)
        {
           printf("Not allocated !!!");
           break;
        }
        else
        {
             printf("Enter data for node %d: ",i);
            scanf("%d",&num);
            t->data=num;
            t->next=NULL;
            head->next=t;
            head=t;
        }
        
        
    }
    
    
    
}
void Display()
{
    struct Node *postion;
    postion =first;
    while (postion != NULL)
    {
        printf("%d ",postion->data);
        postion = postion->next;
    
    }
    
}
void Insert(int value,int pos)
{
    struct Node *temp,*newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory Error !!!");
        return;
    }
    newNode->data=value;
    if (pos == 1)
    {
        newNode->next=first;
        first=newNode;

    }
    else if (pos>1)
    {
        temp=first;
        for (int i = 1; i < pos-1 && temp; i++)
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
            temp->next=newNode;
        }
    }
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