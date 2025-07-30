#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

void createAndREverse();

void display();

void main(){
    createAndREverse();

    display();
}

void createAndREverse(){
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
    save=first;
    struct node *pred=NULL;
    struct node *next=NULL;

    while(save!= NULL){
        next=save->link;
        save->link=pred;
        pred=save;
        save=next;
    }
    first=pred ;


}

void display(){
    struct node *save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}