#include<stdio.h>
void main(){
	int a,cout=0;
	printf("enter a number = ");
	scanf("%d",&a);
	int i=2;
	while(i<a){
		if(a%i==0){
			cout++;
            break;			
		}
		i++;
	}
	if(cout==0){
		printf("prime number");
		
	}
	else{
		printf("not prime");
	}
}
