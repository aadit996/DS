#include<stdio.h>
#include<math.h>
void main(){
    int n,rem,sum=0;
    printf("enter number = ");
    scanf("%d",&n);
    int num=n;//original value is retained
    int temp=n;
    int i=0;
        while(n!=0){
        n=n/10;
        i++;//count number of digits
    }
    
    while(num!=0){
        rem=num%10;
        sum=sum+pow(rem,i);
        num=num/10;
      
    }

    if(sum==temp){ 
        printf("armstrong number");
    }
    else{
        printf("not armstong number");
    }

}