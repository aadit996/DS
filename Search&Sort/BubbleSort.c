#include<stdio.h>
//large go last
void bubbleSort(int a[],int n){

    int last=n-1;

    for(int i=0;i<n-1;i++){
        int exc=0;
        for(int j=0;j<last;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                exc++;
            }
        }
        if(exc == 0){
            return;
        }
        else{
            last--;
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

     bubbleSort(a,n);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}