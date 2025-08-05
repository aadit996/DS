#include<stdio.h>
struct interval{
    int start;
    int end;
};

struct interval stack[100];

void push();

struct interval pop();

int top=-1;

void main(){
    int arr[4][2]={{1,3},{2,4},{6,8},{9,10}};
    
}

void push(struct interval temp){
    if(top>=99){
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=temp;
}

struct interval pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    top--;
    return stack[top+1];
}