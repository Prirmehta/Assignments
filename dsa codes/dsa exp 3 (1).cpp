#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int top=-1;
//during stack initialization top should be -1
int stack[MAX];
void push(int num);
void pop();
void peep();
void display();
bool isfull();
bool isempty();
int main(){
    
    int option, number;
    while(true){
        printf("enter your choice of stack operation: \n");
        printf("1. push\n2. pop\n3. peep\n4. display\n5. Exit.\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                printf("enter the value to be added to the stack: ");
                scanf("%d",&number);
                push(number);
                continue;
                
            case 2:
                pop();
                continue;
                
            case 3:
                peep();
                continue;
                
            case 4:
                display();
                continue;
                
            case 5:
                exit(0);
                //exit terminates the entire program, meanwhile return only brings the flow of control
                //from the called function to the calling function.
            
            default:
                printf("invalid choice.");
                continue;
                
        }
    }
}
void push(int num){
    if (isfull()){
        printf("the stack is full. \n");
        return;
    }
    
    top++;
    stack[top]=num;
}

bool isempty(){
    if (top==0){
        return true;
    }
    
    return false;
}

bool isfull(){
    if (top==MAX-1){
        return true;
    }
    
    return false;
}

void pop(){
    if (isempty()){
        printf("the stack is empty. ");
        return;
    }
    
    printf("popped element is: %d", stack[top]);
    top--;
}

void peep(){
    if (isempty()){
        printf("the stack is empty. ");
        return;
    }
    
    printf("%d",stack[top]);
    
}

void display(){
    for (int i=0; i<=top; i++){
        printf("%d ,", stack[i]);
    }
}

