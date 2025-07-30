#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct Student{
    int roll_no;
    char name[20]; 
    char branch[20]; 
    int batch_no;
};

void main(){

    struct Student *ptr=(struct Student*)malloc(sizeof(struct Student));

    ptr->roll_no=176;
    strcpy(ptr->name,"Aadit");
    strcpy(ptr->branch,"CSE");
    ptr->batch_no=4;

    printf("Roll no %d\n",ptr->roll_no);
    printf("Name %s\n",ptr->name);
    printf("Branch %s\n",ptr->branch);
    printf("Batch no %d\n",ptr->batch_no);
}