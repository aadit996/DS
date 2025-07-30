#include<stdio.h>
void main(){
	int n,fact=1;
	printf("enter value of n = ");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		fact=fact*i;
		i++;		
	}
	printf("factorial = %d",fact);
}
