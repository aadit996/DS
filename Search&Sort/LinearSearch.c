#include<stdio.h>

int linearSearch(int a[],int n,int element){
    for(int i=0;i<n;i++){
        if(a[i] == element){
            return i;
        }
    }
    return -1;
}

void main(){
    int n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }

    int element;
    printf("Enter Element to be searched : ");
    scanf("%d",&element);

    int res = linearSearch(a,n,element);

    if(res == -1){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }
}