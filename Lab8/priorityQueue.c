#include<stdio.h>

struct node{
    int info;
    int proirity;
};

int f=-1;
int r=-1;

struct node queue[5];

void enqueue(int info,int priority){
    if(r>=4){
        printf("Priority queue overflow");
        return;
    }

    if(f==-1){
        r=0;
        f=0;
    }
    else{
        r++;
    }
    queue[r].info=info;
    queue[r].proirity=priority;
}

void main(){
    for(int i=0;i<5;i++){
        int info,priority;
        printf("Enter data of %d : ",i+1);
        scanf("%d",&info);

        printf("Enter priority of %d : ",i+1);
        scanf("%d",&priority);

        // enqueue(info,&proirity);
    }
}