#include<stdio.h>

void insertionSort(int a[],int n){
    int i=1;

    while(i<n){
        int key=a[i];
        int j=i-1;

        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        i++;
        a[j+1]=key;
    }

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

     insertionSort(a,n);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}