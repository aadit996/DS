//queue

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

void addNodes(int info);

void push(int info);

int pop();//will return last element(remove)

int peep();//will display first element(not remove)

void display();

void change(int position,int data);

struct node* first=NULL;

void main(){
    struct node* first=NULL;

    addNodes(1);
    addNodes(2);
    addNodes(3);
    addNodes(4);

    // display();
  
    // push(999);

    // display();

    // printf("info of node : %d\n",pop());
    // display();

    // printf("info of node : %d\n",peep());
    // display();

    change(4,777);
    display();
}

void addNodes(int info){
    struct node *save=first;

    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=info;
    newNode->link=NULL;

    if(first==NULL){
        first=newNode;
        save=newNode;
    }
    else{
        while(save->link != NULL){
            save=save->link;
        }
        save->link=newNode;
        save=newNode;
    }
}

void push(int info){

    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=info;
    newNode->link=NULL;


    if(first == NULL){
        first=newNode;
    }else{
        newNode->link=first;
        first=newNode;
    }
}

int pop(){
    struct node *save=first;
    if(first == NULL){
        printf("Linked list is empty");
    }
    else{
        struct node *pred=NULL;
        while(save->link != NULL){
            pred=save;
            save=save->link;
        }
        pred->link=NULL;
        return save->info;
    }
}

int peep(){
    if(first == NULL){
        return 0;
    }
    else{
        return first->info;
    }

}

void display(){
    struct node *save=first;
    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}

void change(int position,int data){
    if(first == NULL){
        printf("Linked list is empty");
        return;
    }
    else{
        struct node *save=first;
        int count = 1;
        while(save->link != NULL && count<position){
            save=save->link;
            count++;
        }
        save->info=data;
    }
}
