#include<stdio.h>
void main(){
    int n,ind;
   printf("Enter size of array = ");
   scanf("%d",&n);

   int a[n];
   for(int i=0;i<n;i++){
    printf("Enter a number : ");
    scanf("%d",&a[i]);
   }

   printf("Enter index = ");
   scanf("%d",&ind);

   for(int i=ind;i<=n;i++){
    if(i==n){
       n--;
    }
    else{
        a[i]=a[i+1];
    }

   }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
     }


}