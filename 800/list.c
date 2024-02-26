#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* list(int n)
{
    struct Node* head;
    struct Node* temp;
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
struct Node* insert(int loc, struct Node* head)
{
    struct Node* temp;
    int i;
    printf("Enter elements:\n");
    if(loc==-1)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
else if(loc==0)
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&new->data);
    temp->next=new;
    new->next=NULL;
}
else
{
    temp=head;
    for(i=1;i<loc;i++)
    {
      temp=temp->next;
    }
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&new->data);
    new->next=temp->next;
    temp->next=new;
}
return head;
}
struct Node* delete(int loc, struct Node* head)
{
    struct Node* temp;
    struct Node* temp1;
    int i;
    if(loc==-1)
{
    temp=head;
   head=head->next;
    free(head);
}
else if(loc==0)
{
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
temp1=temp->next;
temp->next==NULL;
free(temp1);
}
else
{
    temp=head->next;
    temp1=head;
    for(i=2;i<loc;i++)
    {
      temp=temp->next;
      temp1=temp1->next;
    }
temp1->next=temp->next;
free(temp);
}
return head;
}
void print(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,loc;
    scanf("%d",&n);
    struct Node* head=list(n);
print(head);
printf("Enter -1 for inserting at beginning, 0 for inserting at end and location otherwise:");
scanf("%d",&loc);
head=insert(loc,head);
print(head);
printf("Enter -1 for deleting at beginning, 0 for deleting at end and location otherwise:");
scanf("%d",&loc);
head=delete(loc,head);
print(head);
}