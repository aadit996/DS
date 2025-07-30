#include<stdio.h>

char str[100];

char stack[100];

int top=-1;

void push(char c);

char pop();

void compare();

void main(){
    printf("Enter a string : ");
    scanf("%s", str);

    compare();
}

void push(char c){
    if(top>=99){
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=c;
}

char pop(){
    if(top<=0){
        printf("Stack underflow");
        return -1;
    }
    top--;
    return stack[top+1];
}

void compare(){
    
    push('c');

    int i=0;
    while(str[i] != 'c'){
        if(str[i] == '\0'){
            break;
        }
        char c=str[i];
        push(c);
        i++;
    }
    i++;

    int flag=0;
    while(stack[top] != 'c'){
        char c=pop();
        
        if(str[i] != c){
            flag=1;
            break;
        }
        i++;
    }

    if(flag==1 || str[i] != '\0'){
        printf("Invalid string");
    }
    else{
        printf("Valid string");
    }
}