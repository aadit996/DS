#include<stdio.h>
void main(){
   int n;
   printf("Enter size of array = ");
   scanf("%d",&n);

   int a[n];
   for(int i=0;i<n;i++){
    printf("Enter a number : ");
    scanf("%d",&a[i]);
   }

   int num;
   printf("Enter number to be deleted = ");
   scanf("%d",&num);
   
   int index;
   for(int i=0;i<n;i++){
       if(a[i]==num){
        index=i;
       }
   }

   for(int i=index;i<=n;i++){
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