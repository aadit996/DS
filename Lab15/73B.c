#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* first=NULL;

struct node* last=NULL;

void create();

void deleteAlternate();

void display();

void main(){

    create();

    deleteAlternate();
    
    display();
}

void create(){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    int i=0;
    while(i<n){
        int temp;
        printf("Enter INFO : ");
        scanf("%d",&temp);

        struct node* newNode=(struct node*)malloc(sizeof(struct node));
	
	    newNode->info=temp;
	    newNode->lptr=NULL;
	    newNode->rptr=NULL;

        if(first == NULL){
            first=newNode;
            last=newNode;
            first->lptr=NULL;
        }
        else{
            newNode->lptr=last;
            last->rptr=newNode;
            last=newNode;
            last->rptr=NULL;
        }

        i++;
    }
}

void deleteAlternate(){

    struct node* save=first;


    while(save->rptr != NULL){
        struct node* temp=save->rptr->rptr;
        struct node* todelete=save->rptr;

        if(temp == NULL){
            save->rptr=NULL;
            break;
        }


        save->rptr=temp;  
        temp->lptr=save;

        save=temp;
        free(todelete);
    }
}

void display(){
    struct node*save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->rptr;
    }
}