#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
      printf("Enter a number : ");
      scanf("%d",&a[i]);
    }
    
    int large=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }   

    int small=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<small){
            small=a[i];
        }
    }   

    printf("Largest number : %d\n",large);
    printf("Smalest number : %d",small);

}