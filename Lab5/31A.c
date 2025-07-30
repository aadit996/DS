#include<stdio.h>
void main(){


    int a[2][2],b[2][2],c[2][2];

    printf("for matrix a : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter number = ");
            scanf("%d",&a[i][j]);


        }
    }

    
    printf("for matrix b : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter number = ");
            scanf("%d",&b[i][j]);


        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             c[i][j]=a[i][j]+b[i][j];
       }   
     
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf(" %d ",c[i][j]);
            
        }
          printf("\n");
    }
}