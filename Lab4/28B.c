#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int index;
            if(a[i] == a[j]){//marks the duplicate number 
                index=j;
                for(int k=index;k<=n;k++){
                    if(k==n){
                        n--;
                    }
                    else{
                        a[k]=a[k+1];
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}