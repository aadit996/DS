#include<stdio.h>
int queue[5]={1,2,3};

int f=-1;
int r=-1;

void cqinsert(int n){
    if(r==f){
        printf("Queue overflow");
        return;
    }
    if(r==5){//r at last
        r=0;
    }
    else{
        r++;
    }
    queue[r]=n;

    if(f=-1){
        f=0;
    }
}

int cqdelete(){
    if(f==-1){
        printf("Queue underflow");
        return;
    }
    int y=queue[f];
    if(r==f){
        r=-1;
        f=-1;
        
    }

    if(f==5){
        f=0;
    }
    else{
        f--;
    }
    return y;
}

void main(){}