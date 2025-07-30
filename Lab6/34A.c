#include<stdio.h>

int top=-1;

void push(int arr[],int n);

int pop(int arr[]);

int peep(int arr[],int n);

void change(int arr[],int n,int i);

void display(int arr[]);

void main(){
    int arr[5];

    push(arr,3);
    push(arr,2);
    push(arr,1);

    // display(arr);

    // int p=pop(arr);
    // if(p==-1){
    //     printf("Stack underflow");
    // }
    // else{
    //     printf("POP : %d\n",p);
    // }

    // int pe=peep(arr,3);
    // if(pe==-1){
    //     printf("Stack underflow\n");
    // }
    // else{
    //     printf("PEEP : %d\n",pe);
    // }

    // change(arr,999,3);
    

    display(arr);
}

void push(int arr[],int n){
    if(top>=4){
        printf("Stack overflow");
        return;
    }

    top++;

    arr[top]=n;
}

int pop(int arr[]){
    if(top == -1){
        // printf("Stack underflow");
        return -1;
    }

    top--;

    return arr[top+1];
}

int peep(int arr[],int n){
    if(top == -1 || n-1>top){
        return -1;
    }
    return arr[top-n+1];
}

void change(int arr[],int n,int i){
    if(top == -1 || i-1>top){
        printf("Stack undeflow");
        return;
    }
    arr[top-i+1]=n;
}

void display(int arr[]){
    if(top == -1){
        printf("Stack underflow");
        return;
    }

    printf("Display : \n");

    for(int i=top;i>=0;i--){
        printf("%d\n",arr[i]);
    }

}