#include<stdio.h>
#include<math.h>

int binarySearch(int a[],int n, int element){
    int low=0,high=n-1;

    while(low<=high){
        int mid=floor((high+low)/2);

        if(a[mid] == element){
            return mid;
        }
        else if(a[mid] < element){
            low=mid+1;
        }
        else{
            high=mid-1;
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

    int res = binarySearch(a,n,element);

    if(res == -1){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }
}