//stack

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

void addNodes(int info);

void push(int info);

int pop();//will return first element(remove)

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

    // push(999);

    // display();

    // printf("info of node : %d\n",pop());
    // display();

    // printf("info of node : %d\n",peep());
    // display();

    change(2,777);
    display();
}

void addNodes(int info){
    struct node* save=first;

    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=info;
    newNode->link=NULL;

    if(first == NULL){
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
    // struct node* save=first;

    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=info;
    newNode->link=NULL;

    if(first == NULL){
        first=newNode;
    }
    else{
        newNode->link=first;
        first=newNode;
    }

}

int pop(){
    if(first==NULL){
        return  ;
    }
    else{
        struct node*save=first;
        first=save->link;
        save->link=NULL;

        return save->info;
    }
}

int peep(){
    struct node *save=first;
    if(first==NULL){
        printf("Linked list is empty");
    }
    else{
        while(save->link != NULL){
            save=save->link;
        }
        return save->info;
    }
}

void display(){
    struct node* save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}

void change(int position,int data){

    if(first==NULL){
        printf("Empty linked is list");
        return;
    }
    struct node *save=first;
    int count = 1;

    while(save!=NULL && count<position){
        save=save->link;
        count++;
    }

    if(save==NULL){
        printf("Enter valid position");
    }else{
        save->info=data;
    }

}