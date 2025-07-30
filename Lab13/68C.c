#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

void addandchange();

void display();

void main(){

    addandchange();

    display();

}

void addandchange(){
    int index;
    printf("Enter number of nodes : ");
    scanf("%d",&index);

    struct node *save=first;

    int i=0;
    while(i<index){
        int temp;
        printf("Enter INFO : ");
        scanf("%d",&temp);

        struct node *newNode=(struct node*)malloc(sizeof(struct node));

        newNode->info=temp;
        newNode->link=NULL;

        if(first == NULL){
            first=newNode;
            save=newNode;
        }
        else{
           save->link=newNode;
           save=newNode;
        }
        i++;
    }

    struct node* prev=NULL;
    struct node* current=first;
    struct node* next=NULL;

    first=first->link;

    while(current != NULL && current->link != NULL){
        next=current->link;

        current->link=next->link;
        next->link=current;

        if(prev != NULL){
            prev->link=next;
        }

        prev=current;
        current=current->link;
}

       

    
}

void display(){
    struct node *save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}