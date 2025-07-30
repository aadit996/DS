#include<stdio.h>
#include<stdlib.h>

struct node{
    int power;
    int info;
    struct node *link;
};

struct node *firstA=NULL;

struct node *firstB=NULL;

struct node *lastA=NULL;

struct node *lastB=NULL;



void creatAB();//create and join

void sort();

void add();

void displayC();

void main(){
    
    creatAB();

    sort();

    add();

    displayC();
}

void creatAB(){
    int n;
    printf("Enter number of nodes for A: ");
    scanf("%d",&n);

    int i=0;
    struct node* save=firstA;
    while(i<n){
        int temp,power;
        printf("Enter INFO and POWER : ");
        scanf("%d    %d",&temp,&power);

        struct node* newNode=(struct node*)malloc(sizeof(struct node));

        newNode->link=NULL;
        newNode->info=temp;
        newNode->power=power;

        if(firstA==NULL){
            save=newNode;
            firstA=newNode;
        }
        else{
            save->link=newNode;
            save=newNode;
        }
        i++;
        lastA=newNode;
    }

    printf("Enter number of nodes for B : ");
    scanf("%d",&n);
    i=0;
    save=firstB;
    while(i<n){
        int temp,power;
        printf("Enter INFO and POWER : ");
        scanf("%d    %d",&temp,&power);

        struct node* newNode=(struct node*)malloc(sizeof(struct node));

        newNode->link=NULL;
        newNode->info=temp;
        newNode->power=power;

        if(firstB==NULL){
            save=newNode;
            firstB=newNode;
        }
        else{
            save->link=newNode;
            save=newNode;
        }
        i++;
        lastB=newNode;
    }

    lastA->link=firstB;
}

void sort(){
    struct node *save=firstA;
    
    while(save != NULL){
        struct node *select=save->link;
        while(select != NULL){
            if(select->power>save->power){

                int power=save->power;
                save->power=select->power;
                select->power=power;

                int info=save->info;
                save->info=select->info;
                select->info=info;
            }
            select=select->link;
        }
        save=save->link;
    }
}

void add(){
    struct node *save=firstA;
    struct node *select=save->link;

    while(select != NULL || save != NULL){
        
        if(save->power == select->power){

            save->info=save->info+select->info;
            save->link=select->link;
            free(select);
        }
        if(save != NULL && save->link != NULL){
            save=save->link;
            select=save->link;
        }
        else{
            break;
        }
        
    }
}

void displayC(){
    struct node* save=firstA;
    while(save != NULL){
        printf("INFO : %d | POWER : %d\n",save->info,save->power);
        save=save->link;
    }
}