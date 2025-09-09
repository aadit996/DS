#include<stdio.h>

int n=20;

int hashset[20];

void init(){//initialize all value with -1
    for(int i=0;i<n;i++){
        hashset[i]=-1;
    }
}

int f(int key){//hash func
    return key%20;
}

void add(int key){

    int index=f(key);
    if(hashset[index] == -1){
        hashset[index]=key;
        return;
    }
    else if(hashset[index] == key){
        printf("Key already exists");
        return;
    }
    //colision
    else{
        for(int probe=1;probe<n;probe++){

            int tempIndex=(index+probe)%20;

            if(hashset[tempIndex] == key){
                printf("Element already exists");
                return;
            }

            else if(hashset[tempIndex] == -1){
                hashset[tempIndex]=key;
                return;
            }
           
        }
    }
    printf("Hasset is full");
}

void search(int key){
    int index=f(key);
    if(hashset[index] == key){
        printf("Element found");
        return;
    }
    else if(hashset[index] == -1){
        printf("Element does not exists");
        return;
    }
    else{
        for(int probe=1;probe<n;probe++){

            int tempIndex=(index+probe)%20;

            if(hashset[tempIndex] == key){
                printf("Element found");
                return;
            }
            if(hashset[tempIndex] == -1){
                printf("Element not found");
                return;
            }

        }
            printf("Element not found");
        
    }
}

void display(){
    for(int i=0;i<n;i++){
        printf("%d  ",hashset[i]);
    }
}
void main(){
    init();
    add(21);
    add(31);
    add(41);
    add(51);
    add(21);

    // search(12);

    // display();
}  