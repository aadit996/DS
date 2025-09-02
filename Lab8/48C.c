#include<stdio.h>

int queue[5];

int f=-1;
int r=-1;

// DQINSERT_REAR is same as QINSERT (Enqueue)
// DQDELETE_FRONT is same as QDELETE (Dequeue)
// DQINSERT_FRONT 
// DQDELETE_REAR

void insert_rear(int n){
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
int delete_front(){
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

void insert_front(int n){
    if(f == 0){
        printf("Queue overflow");
        return;
    }
    if(f==-1){
        f=0;
        r=0;
    }
    else{
        f--;
    }
    queue[f]=n;
}
int delete_rear(){
    if(r==-1){
        printf("Queue underflow");
        return -111;
    }
    int temp=queue[r];
    if(r==f){
        f=-1;
        r=-1;
    }
    else{
        r--;
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
    insert_rear(1);
    insert_rear(2);
    insert_rear(3);
    insert_rear(4);

    printf("Deleted elements : %d\n",delete_front());
    printf("Deleted elements : %d\n",delete_front());

    display();
}