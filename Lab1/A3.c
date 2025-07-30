#include<stdio.h>
void main(){
    char ch;
    printf("enter character = ");
    scanf("%c",&ch);

    if(ch =='a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
       ch =='A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
        printf("it is vowel");

    }
    else{
        printf("it is consonant");
    }
}