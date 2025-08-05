#include<stdio.h>

int queue[5];

int f=-1;
int r=-1;

void enqueue(int n){
    if(r>=4){
        printf("Queue overflow\n");
        return;
    }

    r++;
    queue[r]=n;

    if(f==-1){
        f=0;
    }
}

int dequeue(){
    if(f==-1){
        printf("Queue underFlow");
        return 999;
    }
    int temp=queue[f];

    if(r==f){
        r=-1;
        f=-1;
    }
    else{
        f++;
    }
    return temp;
}

void display(){
    printf("DISPLAY \n");
    for(int i=f;i<=r;i++){
        printf("%d \n",queue[i]);
    }
}

void main(){
   
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    printf("%d\n",dequeue());
    printf("%d\n",dequeue());

    display();
}