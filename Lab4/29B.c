#include<stdio.h>
void main(){
    int m,n;

    printf("Enter size of array  1 : ");
    scanf("%d",&m);

    int a[m];
    for(int i=0;i<m;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }

    printf("Enter size of array  2 : ");
    scanf("%d",&n);

    int b[n];
    for(int i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&b[i]);
    }

    int j=0;
    for(int i=m;i<(m+n);i++){
        a[i]=b[j];
        j++;
    }

    for(int i=0;i<(m+n);i++){
        printf(" %d ",a[i]);
    }
}