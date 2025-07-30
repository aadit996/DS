#include<stdio.h>
void main(){
    int a[6]={1,2,3,4,5};
    int num=99,index=2;

    for(int i=5;i>=2;i--){
        if(i==index){
            a[i]=num;
        }
        else{
            a[i]=a[i-1];
        }
    }

     for(int i=0;i<6;i++){
        printf("%d ",a[i]);
     }

}