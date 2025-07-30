#include<stdio.h>

char stack[100];

int top=-1;

void push(char c);

char pop();

void result(int testcase);

void main(){
    int testCase;

    printf("Enter number of testcases : ");
    scanf("%d",&testCase);

    result(testCase);
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
    if(top=-1){
        printf("Stack underflow");
        return '#';
    }
    top--;
    return stack[top+1];
}

void result(int testcase){
    for(int i=0;i<testcase;i++){//for each string

        char str[100];
        int len;
        char temp[100];

        printf("Enter length : ");
        scanf("%d",&len);

        printf("Enter string : ");
        scanf("%s",&str);

        for(int j=0;str[j] != '\0';j++){//iterate that particular string
            if(str[j+1] == 'a'||str[j+1] == 'e'||str[j+1] == 'i'||str[j+1] == 'o'||str[j+1] == 'u'){
                for(int k=0;)
            }
            else{
                char c=str[i];
                push(c);
                continue;
            }
        }
        

    }
}