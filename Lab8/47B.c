#include<stdio.h>
int queue[5];

// (rear + 1) % SIZE


int f=-1;
int r=-1;

void cqinsert(int n){
     if(f==-1){
        f=0;
    }
    if(r==5){//r at last
        r=0;
    }
    else{
        r++;
    }
    if(r==f){
        printf("Queue overflow");
        return;
    }
    queue[r]=n;

   
}

int cqdelete(){
    if(f==-1){
        printf("Queue underflow");
        return -1;
    }
    int y=queue[f];
    if(r==f){
        r=-1;
        f=-1;
        
    }

  
  
        f--;
    
    return y;
}

void main(){}