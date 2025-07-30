#include<stdio.h>
#include<stdlib.h>
void main(){
	
	int *iptr=(int*)malloc(1*sizeof(int));
	char *cptr=(char*)malloc(1*sizeof(char));
	float *fptr=(float*)malloc(1*sizeof(float));
	
	if(iptr&&cptr&&fptr){
		*iptr=176;
		*cptr='A';
		*fptr=1.1;
		
		printf("Integer : %d\n",*iptr);
		printf("Character : %c\n",*cptr);
		printf("Float : %f\n",*fptr);
		free(iptr);
		free(cptr);
		free(fptr);
	}
	else{
		printf("Memory allocation failed");
	}
}
