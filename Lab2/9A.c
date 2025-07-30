#include<stdio.h>
void main(){
	int a,b,prod=1;
	printf("enter base a = ");
	scanf("%d",&a);
	printf("enter power b = ");
	scanf("%d",&b);
	int i;
	for(i=1;i<=b;i++){
		prod = prod * a;
	}
	printf("a^b = %d",prod);
}
