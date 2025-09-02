#include<stdio.h>


int queue[5];

// (rear + 1) % SIZE


int f=-1;
int r=-1;

void cqinsert(int n){  
    if(f == ((r+1)%5)){//base condition
        printf("Queue overflow");
        return;
    }
   

    if(f==-1){//if no element then
        f=0;
        r=0;
    }
    else{//repositon r
        r=(r+1)%5;
    }

    queue[r]=n;//assing the value
}

int cqdelete(){
    if(f == -1){
        printf("Queue underflow");
        return -1;
    }

    int temp=queue[f];

    if(f == r){
        f=-1;
        r=-1;
    }
    else{
        f=(f+1)%5;
    }

    return temp;


}

void display(){

    int i;
    for(i=f;i!=r;){
        printf("%d ",queue[i]);
        i=(i+1)%5;
    }

    printf("%d ",queue[i]);

}

void main(){
    cqinsert(1);
    cqinsert(2);
    cqinsert(3);
    cqinsert(4);

    printf("Deleted elements : %d\n",cqdelete());
    printf("Deleted elements : %d\n",cqdelete());

    display();
}

