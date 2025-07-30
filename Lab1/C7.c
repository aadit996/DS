#include<stdio.h>
void main(){
    int days,y,w,d,a;

    printf("enter value of days = ");
    scanf("%d",&days);

    y=days/365;//into years
    a=days%365;//gives remaining days

    w=a/7;//converts remaining days into weeks
    d=a%7;//give the remaining days left of above statement

    printf("year:%d weeks:%d days:%d",y,w,d);


}