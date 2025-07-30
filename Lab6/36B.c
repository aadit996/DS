#include<stdio.h>

char stack[100];

int top=-1;

void push(char c);

char pop();

void validate(char str[]);

void main(){
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);

    validate(str);
}

void push(char c){
    if(top>=100){
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=c;
}

char pop(){
    if(top<0){
        printf("Stack underflow");
        return '#';
    }
    top--;
    return stack[top+1];
}

void validate(char str[]){

    int i=0;

    if(str[0] != 'a' || str[0] == 'b' ){
        printf("Not valid string");
        return;
    }

    for(i=0;str[i]!='b';i++){
        if(str[i] == 'a'){
            char temp=str[i];
            push(temp);
        }
        
    }

    for(int j=i;str[j] != '\0';j++){
        if(str[j] == 'a'){
            printf("Not valid string");
            return;
        }
        else{
            pop();
        }
    }
    if(top == -1){
        printf("Valid string");
    }
    else{
        printf("Not valid string");
    }
}