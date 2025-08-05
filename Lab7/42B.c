#include<stdio.h>
#include<string.h>
char stack[100];
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

int G(char c){//G
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 3;   
    else if(c == '^')
        return 6;
    else if(c == '(')
        return 0; 
    else
        return 8; 

}

int F(char c){//F
    if(c == '+' || c == '-')
        return 2;
    else if(c == '*' || c == '/')
        return 4;   
    else if(c == '^')
        return 5;
    else if(c == '(')
        return 9;
    else if(c == ')')
        return 0;
    else    
        return 7;   

}
int rank(char c){
    if(c=='-'||c=='+'||c=='*'||c=='/'||c=='^'){
        return -1;
    }
    else{
        return 1;
    }
}
void toPrefix(char str[]){
    int i=0,j=0,rankVar=0;
    char prefixstring[100];

    while(i<strlen(str)){
        char next=str[i];
        if(top==-1){
            printf("Invalid String");
            return;
        }
        while(G(stack[top])>F(next)){
            char temp=pop();
            prefixstring[j]=temp;
            j++;
            rankVar=rankVar+rank(temp);

            if(rankVar<1){
                printf("Invalid");
                return;
            }
        }

        if(G(stack[top]) != F(next)){
            push(next);
        }
        else{
            char temp=pop();
        }
        i++;
    }
    prefixstring[j]='\0';

    if(top!=-1 || rankVar!=1){
        printf("Invalid string");
    }
    else{
        printf("Valid string\n");
        for(int z=(strlen(prefixstring)-1);z>=0;z--){
            printf("%c",prefixstring[z]);
        }
    }
}

void main(){
    char str[100];
    printf("Enter a infx string : ");
    scanf("%s",str);

    push('(');

    int count=0;
    char revInfix[100];

    for(int i=(strlen(str)-1);i>=0;i--){
        if(str[i]=='('){
            revInfix[count]=')';
        }
        if(str[i]==')'){
            revInfix[count]='(';
        }
        else{
            revInfix[count]=str[i];
        }
        count++;
    }

    revInfix[count]='\0';
    strcat(revInfix,")");

    // printf("%s",revInfix);

    toPrefix(revInfix);
    
    
}