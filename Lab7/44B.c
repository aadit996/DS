//prefix eval
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int stack[100];
int top=-1;

void push(char c){
    if(top>=99){
        printf("Stack overFlow");
        return;
    }
    top++;
    stack[top]=c;
}
char pop(){
    if(top==-1){
        printf("Stack UnderFlow");
        return '#';
    }
    top--;
    return stack[top+1];
}

void prefixEvale(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(isdigit(str[i])){
            push(str[i]-'0');
        }
        else{
            int op1=pop();
            int op2=pop();

            switch (str[i])
            {
                case '+':push(op1+op2);
                break;
                case '-':push(op1-op2);
                break;
                case '*':push(op1*op2);
                break;
                case '/':push(op1/op2);
                break;
                case '^':push(pow(op1,op2));
                break;
            }
        }
    }

    printf("Answer = %d",pop());
}
void main(){
    char str[100];
    printf("Enter a prefix String : ");
    scanf("%s",str);

    // printf("%s",strrev(str));
    strrev(str);

    prefixEvale(str);

}