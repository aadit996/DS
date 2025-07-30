#include<stdio.h>
#include<string.h>

char stack[100];

int top=-1;

void push(char c);

char pop();

char* star(char str[]);

void main(){
    char str[100];

    printf("Enter a string : ");
    scanf("%s",&str);

    char temp[100];
    strcpy(temp,star(str));

    printf("Result : %s",temp);


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
    if(top==-1){
        printf("Satck underflow");
        return '#';
    }
    top--;
    return stack[top+1];
}


char* star(char str[]){
    for(int i=0;str[i] != '\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            char temp=str[i];
            push(temp);
            continue;
        }
        if(str[i] == '*'){
            pop();
            continue;
        }
    }
    static char temp[100];
    for(int i=0;i<=top;i++){
        temp[i]=stack[i];
    }
    temp[top+1]='\0';

    return temp;
}