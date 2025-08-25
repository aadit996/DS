#include<stdio.h>
#include<math.h>

#define n 5
int a[n];


void merge(int low,int mid,int high){
    int h,i,j,k;//k is iterator of other loops
    h=low;//arr 1
    i=low;//for temp
    j=mid+1;//arr 2

    int temp[n];

    while(h<=mid && j<=high){
        if(a[h] <= a[j]){
            temp[i]=a[h];
            h++;
        }
        else{
            temp[i]=a[j];
            j++;
        }
        i++;
    }

    k=0;

    if(h>mid){
        for(k=j;k<=high;k++){
            temp[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++){
            temp[i]=a[k];
            i++;
        }
    }

    for(k=0;k<n;k++){
        a[k]=temp[k];
    }


}

void mergeSort(int low,int high){
    
    while(low<high){
        int mid=floor((low+high)/2);

        mergeSort(low,mid);

        mergeSort(mid+1,high);

        merge(low,mid,high);
    }

}
void main(){

    for(int i=0;i<n;i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }

    int low=0,high=n-1;

     mergeSort(low,high);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}