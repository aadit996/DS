#include<stdio.h>
void main(){
	int a,rem,rev=0;
	printf("enter number ");//123
	scanf("%d",&a);
	int i=1;
	while(a!=0){
		rem=a%10;
		rev=(rev*10)+rem;
		a=a/10;
	}
	printf("reverse number = %d",rev);
}
