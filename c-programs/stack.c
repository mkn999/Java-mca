#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *next;
};
struct node* top=0; //first top should point to null $global declaration

void push(int x){
struct node* newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
printf("%d pushed into stack sucessfully !",newnode->data);
}
void display(){
    struct node* temp=top;
     if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("\nStack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void pop(){
    struct node* temp = top;
    top=top->next;
    printf("%d removed from stack",temp->data);
    free(temp);
}

void peek(){
    if(top==0){
        printf("\n Stack is empty!");
    }
    else{
    printf("%d",top->data);
    }
}

void main(){
    printf("Welcome to Stack Using Linked List ");
    printf("\n Choose \n 1.Push \n 2.Pop \n 3.Peek \n 4.Show Stack \n 5.Exit");
    while(1){
    int opt;
    printf("\n Enter option:");
    scanf("%d",&opt);
        switch(opt){
            case 1:
            printf("Enter the element to push:");
            int ele;
            scanf("%d",&ele);
            push(ele);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            printf("Exiting Program.");
            break;
            default:
            printf("Enter the correct option");
        }
        if (opt == 5) {
            break; // Breaks out of the while loop when opt is 4
        }
    }
    
}
