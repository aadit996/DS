#include<stdio.h>
void main(){
    int a,b,count=0;
    printf("Enter number a = ");
    scanf("%d",&a);
    printf("Enter number b = "); 
    scanf("%d",&b);

    for(int i=a;i<=b;i++){

            count =0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==0){
                printf("%d\n",i);
            }
        }
}