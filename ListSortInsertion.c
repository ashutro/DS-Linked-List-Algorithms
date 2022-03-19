 /*
    #create linked-list
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data ;
     struct Node *next;
}*first = NULL;
void create(int n)
{
    int i,num;
    struct Node *temp,*head;
    if(n > 0)
    {
        first = (struct Node *)malloc(sizeof(struct Node ));
        if (first == NULL)
        {
            printf("Not Allocated!!!");
            exit -1;
        }
        else 
        {
            
            printf("Enter data: 1 ");
            scanf("%d",&num);
            first->data=num;
            first->next=NULL;
            head  = first;
            for ( i = 2; i <= n; i++)
            {
                temp = (struct Node *)malloc(sizeof(struct Node));
                if (temp == NULL)
                {
                    printf("Not Allocated!!!");
                    exit -1;
                }
                else
                {
                    printf("Enter data: %d ",i);
                    scanf("%d",&num);
                    temp->data = num;
                    temp->next = NULL;
                    head->next =temp;
                    head = temp;
                }
                
                
            }
        }
    }
    else 
    {
        printf("size is zero");
    }
}
void SortedInsertion(int data){
    struct Node *temp, *head, *tempHead;
    head = first;
    temp = (struct Node *) malloc(sizeof(struct Node));

    temp->data = data;
    printf("%d",temp->data);
    temp->next = NULL;
    if (first == NULL)
    {   
        first = temp;
    }
    else{
        while(head && head->data < data){
            tempHead = head;
            head = head->next;
        }
        if(head == first){
            temp->next = first;
            first = temp;
        }
        else{
            temp->next = tempHead->next;
            tempHead->next = temp;
        }
    }
    
}
void Display()
{
    struct Node *head  = first;
    
    while (head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }

    
}
int main()
{   int x;
    printf("Enter size the of Linked List:  ");
    scanf("%d",&x);
    create(x); 
    printf("\n");
    printf("Element of Linked List:\n");
    Display();
    printf("\n");
    SortedInsertion(45);
    Display();

    return 0;
}