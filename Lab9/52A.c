#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Enter a number : ");
		scanf("%d",(arr+i));
	}
	
	int max=*(arr+0);
	
	for(i=0;i<n;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
		}
	}	
	
	printf("Largest number : %d",max);
	free(arr);
	
}
