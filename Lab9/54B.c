  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){

    char *ptr=(char*)malloc(100*sizeof(char));
    printf("Enter a string : ");
    scanf("%s",ptr);
    // printf("%d",strlen(ptr));
 
      
    char *temp=(char*)malloc(100*sizeof(char));
    int j=strlen(ptr);
    
    for(int i=0;i<strlen(ptr);i++){
        *(temp+i)=*(ptr+j-1);
        j--;       
    }

    int count=0;
    for(int i=0;i<strlen(ptr);i++){
        if(*(ptr+i) != *(temp+i)){
            count++;
        }
    }
    if(count==0){
        printf("Palindrome ");
    }
    else{
        printf("Not Palindrome ");
    }
}