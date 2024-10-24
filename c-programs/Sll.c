#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() 
{
    struct node *head,*newnode,*temp,*newn,*newno,*prev,*mid,*p;
    int number;
    printf("Enter the number of elements :");
    scanf("%d",&number);
    for (int i=0;i<number;i++){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element to insert:");
    scanf("%d",&newnode->data);
    if (head==NULL){
        head = newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    //input inserted data
    } 
    
   //insertion at begining
    newn = (struct node *)malloc(sizeof(struct node));
    printf("Enter an element to insert at begining:");
    scanf("%d",&newn->data); 
    newn->next= head;
    head=newn;
    
    
    //insertion at end
    newno = (struct node *)malloc(sizeof(struct node));
    printf("Enter an element to insert at end:");
    scanf("%d",&newno->data);
    temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newno;
    newno->next = NULL;
    
    //inserting after a postion
    printf("INSERTION AFTER A LOCATION");
    int pos;
    p = head;
    mid = (struct node *)malloc(sizeof(struct node));
    printf("Enter the postion:");
    scanf("%d",&pos);
    printf("Enter a element to add:");
    scanf("%d",&mid->data);
    for(int i=0;i<pos;i++){
        p=p->next;
    }
    mid->next=p->next;
    p->next=mid;
    

    //delete at begining
    printf("\n DELETION AT BEGINING \n");
    temp=head;
    head=temp->next;
    free(temp); 
    
    //delete at end
    printf("\n DELETION AT END \n");
    temp=head;
    while(temp->next!=NULL){
        prev = temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=NULL;
    
    //to print data
    temp = head;
    printf("inserted data is :"); 
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    
    //printf(" \n %p",head);
    return 0;
}