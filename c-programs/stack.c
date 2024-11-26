// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int d) {
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = top; // Point new node to the current top
    top = newnode;       // Update top to the new node
    printf("Element %d pushed onto stack\n", d);
}

void pop(){
    struct node* temp = top;
    top = top->next;
    printf("%d removed from stack", temp->data);
    free(temp);
}


void peek(){
    if(top==NULL){
        printf("Stack Underflow");
    }
    else{
        printf("%d ",top->data);
    }
}
int main() {
    // Write C code here
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    return 0;
}