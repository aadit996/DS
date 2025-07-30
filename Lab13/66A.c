#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

void addAndSort();

void display();

void main(){
    addAndSort();

    display();


}

void addAndSort(){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    struct node* save=first;

    int i=0;
    while(i<n){
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
        i++;
    }


    save=first;
    struct node *select=NULL;

    while(save!=NULL){
        select=save->link;
        while(select!=NULL){
            if(save->info > select->info){
                int temp=select->info;
                select->info=save->info;
                save->info=temp;
            }
            select=select->link;
        }
        save=save->link;
    }
}

void display(){
    struct node *save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}