#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n],count=0;
    for(int i=0;i<n;i++){
      printf("Enter a number : ");
      scanf("%d",&a[i]);
    }
    
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("Duplicate found at index %d",i);
                count++;
            }
        }
     }
     if(count==0){
        printf("Duplicate not found");
     }

}