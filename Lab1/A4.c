#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter vaue of a = ");
    scanf("%d",&a);
    printf("enter vaue of b = ");
    scanf("%d",&b);
    printf("enter vaue of c = ");
    scanf("%d",&c);
    
    (a>b)?((a>c)?(printf("a is greater")):(printf("c is greater"))):((b>c)?(printf("b is greater")):(printf("c is greater")));
    //ternary operator

}