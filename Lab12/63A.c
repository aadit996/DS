#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *firstA=NULL;
struct node *firstB=NULL;

struct node* copyLL(struct node *firstA);

void displaySecondLL(struct node *firstB);

void main(){

    firstB=copyLL(firstA);

    displaySecondLL(firstB);

}

struct node* copyLL(struct node *firstA){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    struct node *save=firstA;

    int i=0;
    while(i<n){
        int temp;
        printf("Enter INFO : ");
        scanf("%d",&temp);

        struct node *newNode=(struct node*)malloc(sizeof(struct node));

        newNode->info=temp;
        newNode->link=NULL;

        if(firstA == NULL){
            firstA=newNode;
            save=newNode;
        }
        else{
            save->link=newNode;
            save=newNode;
        }
        i++;
    }

    save=firstA;
    struct node *saveB=firstB;
    while(save != NULL){
        struct node *newNode=(struct node*)malloc(sizeof(struct node));

        newNode->info=save->info;
        newNode->link=NULL;

        if(firstB == NULL){
           firstB=newNode;
           saveB=newNode;
        }
        else{
            saveB->link=newNode;
            saveB=newNode;
        }
        save=save->link;
    }

    return firstB;
}

void displaySecondLL(struct node *firstB){

    struct node *save=firstB;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}