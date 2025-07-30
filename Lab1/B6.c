#include<stdio.h>
void main(){
    int sec,min,hr,s,a;

    printf("enter value of sec = ");
    scanf("%d",&sec);

    hr=sec/3600;//into hr
    a=sec%3600;//remaining sec which cannot be converted into hr

    min=a/60; //remaining sec into min
    s=a%60;//remaining sec
    
    printf("%d:%d:%d",hr,min,s);
  

}