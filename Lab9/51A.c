#include<stdio.h>
#include<stdlib.h>
void main(){
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	int sum=0,i;
	
	for(i=0;i<n;i++){
		printf("Enter a number : ");
		scanf("%d",(arr+i));
	}
	
	for(i=0;i<n;i++){
		sum=sum+*(arr+i);
	}
	printf("Sum : %d",sum);
	free(arr);
}
