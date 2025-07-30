#include<stdio.h>

int func(int n);

void main(){
    int n;
    printf("enter value of n = ");
    scanf("%d",&n);
    int res = func(n);
    printf("factorial = %d",res);
}

int func(int n){
    int fact=1;
    if(n==1){
        return 1;
    }
    else{
    fact=n*func(n-1);
    }
}