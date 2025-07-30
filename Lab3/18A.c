#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
      printf("Enter a number : ");
      scanf("%d",&a[i]);
    }
    
     for(int i=0;i<n;i++){
      sum=sum+a[i];
    }

    printf("Average = %f",(sum/(float)n));

}