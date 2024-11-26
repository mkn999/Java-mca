#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* rear = NULL;
struct node* front = NULL;
void enq(int value){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if(rear==NULL){
        rear=front=newnode;
        printf("Element inserted rear \n");
        rear->next = front;
    }
    else{
        rear->next=newnode;
        rear = newnode;
        rear->next=front;
        printf("Element inserted %d",newnode->data);
    }
}
void dq(){
    if(front==NULL){
        printf("Queue empty \n");
        return;
    }
        struct node* temp;
    if(front==rear){ //only one element
            temp=front;
            front=NULL;
            rear=NULL;
            printf("Dequeued item \n");
            free(temp);
        }
    else{
        temp = front;
        front=front->next;
        rear->next=front;
        printf("Dequeued item \n");
        free(temp);
    }
}
void display(){
    struct node *temp=front;
    if(temp==NULL){
        printf("QUEUE EMPTY");
    }
     while(1){
         printf("%d \t",temp->data);
         temp=temp->next;
         if(temp==front){
             break;
         }
    }
    
}
void main(){
    int element;
    int option;
    while(1){
        //printf("Enter option")
    printf("Enter the option:");
    scanf("%d",&option);
    switch(option){
        case 1:
        printf("Enter element to insert:");
        scanf("%d",&element);
        enq(element);
        break;
        case 2:
        dq();
        break;
        case 3:
        display();
        break;
        default:
        printf("Enter valid option");
    }
}
}