#include<stdio.h>
#include<stdlib.h>

char stack[100];
int top = -1;

void push(char c) {
    if (top >= 99) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top < 0) {
        return '#'; // invalid
    }
    return stack[top--];
}

void validate(char str[][100], int n) {
    for (int i = 0; i < n; i++) {
        top = -1;         // reset stack for each string
        int isValid = 1;  // assume valid until proven otherwise

        for (int j = 0; str[i][j] != '\0'; j++) {
            char ch = str[i][j];

            if (ch == '(' || ch == '{' || ch == '[') {
                push(ch);
            }
            else if (ch == ')' || ch == '}' || ch == ']') {
                char temp = pop();
                if (!((ch == ')' && temp == '(') ||
                      (ch == '}' && temp == '{') ||
                      (ch == ']' && temp == '['))) {
                    isValid = 0;
                    break;
                }
            }
            // letters are simply ignored
        }

        // if stack not empty, still invalid
        if (top != -1) {
            isValid = 0;
        }

        printf("%d\n", isValid);
    }
}

void main() {
    int n;
    printf("Number of inputs : ");
    scanf("%d", &n);

    char str[n][100];
    for (int i = 0; i < n; i++) {
        printf("Enter String : ");
        scanf("%s", str[i]);
    }

    validate(str, n);
 
}
 


// #include<stdio.h>
// #include<stdlib.h>

// char stack[100];

// int top=-1;

// void push(char c);

// char pop();

// void validate(char str[][100],int n);

// void main(){
//     int n;
//     printf("Number of inputs : ");
//     scanf("%d",&n);

//     char str[n][100];

//     for(int i=0;i<n;i++){
//         printf("Enter String : ");
//         scanf("%s", str[i]);
//     }
//     validate(str,n);
   
// }
// void push(char c){
//     if(top>=99){
//         printf("Stack overflow");
//         return;
//     }
//     top++;
//     stack[top]=c;
// }

// char pop(){
//     if(top<0){
//         printf("Stack underflow");
//         return '#';
//     }
//     else{
//         top--;
//         return stack[top+1];
//     }
// }

// void validate(char str[][100],int n){
//     for(int i=0;i<n;i++){
//         int isValid=0;

//         for(int j=0;str[i][j] != '\0';j++){

//             if(str[i][j]=='('||str[i][j]=='{'||str[i][j]=='['){//for openning bracket
//                 char temp=str[i][j];
//                 push(temp);
//                 continue;
//             }
//             if(str[i][j]>='a' && str[i][j]<='z'){
//                 continue;
//             }
//             if(str[i][j]==')'||str[i][j]=='}'||str[i][j]==']'){//for closing brackets
//                 char temp=pop();

//                 if((str[i][j]==')' && temp=='(')||(str[i][j]=='}' && temp=='{')||(str[i][j]==']' && temp=='[')){
//                     isValid=1;
//                 }
//                 else{
//                     isValid=0;
//                     break;
//                 }
//             }
//         }
//         if(isValid == 1){
//             printf("1\n");
//         }
//         else{
//             printf("0\n");
//         }
//     }//for all str

// }//func

