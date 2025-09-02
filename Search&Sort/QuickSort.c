#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define n 5
int a[n];


void quickSort(int lb,int ub){
    
    bool flag=true;//init true

    if(lb<ub){// only proceed if lb not intersect ub

        int i=lb;
        int j=ub+1;
        int key=a[lb];

        while(flag){
            i++;
            while(a[i] < key){
                i++;
            } 
            j--;
            while(a[j] > key){
                j--;
            }

            if(i<j){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else{
                flag=false;
            }
        }

        int x=a[lb];
        a[lb]=a[j];
        a[j]=x;

        quickSort(lb,j-1);
        quickSort(j+1,ub);
    }  

    return;
}

void main(){
    for(int i=0;i<n;i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }

    int lb=0,ub=n-1;

    quickSort(lb,ub);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}