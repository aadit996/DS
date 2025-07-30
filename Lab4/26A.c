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

   n++;
   int num;
   printf("Enter number to be inserted = ");
   scanf("%d",&num);

   int index;
   for(int i=0;i<n;i++){
    if(num>a[i]){
        continue;
    }
    else if(num<a[i]){
        index=i;
        break;
    }
   }


   for(int i=n;i>=index;i--){
    if(i==index){
        a[i]=num;
    }
    else{
        a[i]=a[i-1];
    }
   }

   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
}