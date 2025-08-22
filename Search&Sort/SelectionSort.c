//find min element as compared to first element the interchange
//small come first
#include<stdio.h>
void selectionSort(int a[],int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(a[minIndex]>a[j]){
                minIndex=j;
            }

        }

        if(minIndex != i){
                int temp=a[minIndex];
                a[minIndex]=a[i];
                a[i]=temp;
            }
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

     selectionSort(a,n);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}