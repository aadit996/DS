#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

struct node* first=NULL;

void addNodes();

void removeDuplicates();

void display();

void main(){

    addNodes();

    removeDuplicates();
    
    display();
}

void addNodes(){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    struct node* save=first;

    for(int i=1;i<=n;i++){
        int temp;
        printf("Enter INFO : ");
        scanf("%d",&temp);

        struct node* newNode=(struct node*)malloc(sizeof(struct node));

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
    }
}

void removeDuplicates(){
    struct node* save=first;
    struct node* pred=NULL;
    struct node* select=NULL;

    while(save!=NULL){
        select=save->link;
        pred=save;
        while(select != NULL){
            if(save->info == select->info){
                pred->link=select->link;
                pred=save;
            }
            else{
                pred=select;
            }
            select=select->link;
        }       

        save=save->link;
    }
}

void display(){
    struct node* save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}
