#include<stdio.h>
void main(){


    int a[3][2],b[2][3],c[3][3];

    printf("for matrix a : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("enter number = ");
            scanf("%d",&a[i][j]);


        }
    }

    
    printf("for matrix b : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter number = ");
            scanf("%d",&b[i][j]);


        }
    }
      

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }



    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",c[i][j]);
            
        }
          printf("\n");
    }
}