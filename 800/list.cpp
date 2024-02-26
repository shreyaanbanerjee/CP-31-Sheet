#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}
struct Node* list(int n)
{
    struct Node* head,temp;
    int i;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(struct Node*)malloc(sizeof(struct Node));
        temp=head;
        }
        else
        {
    temp->next=(struct Node*)malloc(sizeof(struct Node));
    temp=temp->next;
         }
         scanf("%d",&temp->data);
    }
return head;
}
struct Node* insert(int n,int loc)
{
    struct Node* head,temp;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(struct Node*)malloc(sizeof(struct Node));
        temp=head;
        }
        else
        {
    temp->next=(struct Node*)malloc(sizeof(struct Node));
    temp=temp->next;
         }
         scanf("%d",&temp->data);
    }
return head;
}
void print(struct Node* head)
{
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}