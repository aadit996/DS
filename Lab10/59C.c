#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

struct node *addNodeAndRemove(struct node* first);

void display(struct node *first);

void main(){
    first = addNodeAndRemove(first);

    display(first);
}

struct node *addNodeAndRemove(struct node* first){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    struct node *save=first;

    int i=0;
    while(i<n){
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
    struct node *select;

        while(save != NULL){
            select=save->link;
            while(select != NULL){
                 if(save->info == select->info){
                    save->link=select->link;
                 }
                 select=select->link;
            }
            save=save->link;
        }
        return first;
}

void display(struct node *first){
    struct node *save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}