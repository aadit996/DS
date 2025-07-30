#include<stdio.h>
void main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    
    
    int i=0;
    while(str[i] != '\0'){//marks end of string
        if((str[i]>='a' && str[i]<='z')){
           str[i]-=32;
        }
        else if((str[i]>='A' && str[i]<='Z')){
            str[i]+=32;
        }
        i++;
    }
    
        printf("String : %s",str);
        
     
    
}