// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* temp=NULL;

void insert(int e){
    struct node* newnode;
    newnode =  (struct node*)malloc(sizeof(struct node));
    newnode->data= e;
    if(head==NULL){
        head = temp = newnode;
        newnode->next=head;
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=newnode;
    }

}

void deleab(){
   if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    
    struct node* temp_node = head;
    if (head == head->next) {  // Only one node in the list
        head = NULL;
    } else {
        head = head->next;
        temp->next = head;  // Update the last node's next pointer
    }
    free(temp_node);
}

void iab(int k){
    struct node* loop=head;
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=k;
    while(loop->next!=head){
        loop=loop->next;
    }
    loop->next=newnode;
    newnode->next=head;
}


void display(){
    struct node* temp;
    temp=head;
    if(temp==NULL){
        printf("EMPTY LIST");
    }
    while(1){
        printf("%d \t",temp->data);
        temp=temp->next;
        if(temp==head){
            break;
        }
    }
}




int main() {
    insert(1);
    insert(2);
    insert(3);
    iab(10);
    display();
    return 0;
}