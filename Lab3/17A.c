#include<stdio.h>
void main(){
    int m,n,sum=0;
    printf("Enter m : ");
    scanf("%d",&m);
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is : %d",sum);
}