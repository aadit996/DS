#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

struct node* first=NULL;

struct node* first1=NULL;

struct node* first2=NULL;

struct node* last=NULL;

struct node* last1=NULL;

struct node* last2=NULL;

void createList();

void half();

void display(struct node* first);

void main(){
    createList();

    half();

    printf("List 1 \n");

    display(first1);

    printf("List 2 \n");

    display(first2);
}

void createList(){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    int i=0;
    while(i<n){
        int temp;
        printf("Enter INFO : ");
        scanf("%d",&temp);

        struct node *newNode=(struct node*)malloc(sizeof(struct node));

        newNode->link=NULL;
        newNode->info=temp;

        if(first == NULL){
            first=newNode;
            last=newNode;
            newNode->link=first;
        }
        else{
            newNode->link=first;
            last->link=newNode;
            last=newNode;
        }

        i++;
    }
}

void half(){
    struct node* save=first;
    int count=0;
    do{
        count++;
        save=save->link;
    }while(save!=first);

    int pivot=count/2;

    save=first;

    if(count==1){
        first1=first;
        last1=first;
        last1->link=first1;
        return;
    }
    else if(count==2){
        first1=first;
        last1=first;

        first2=save->link;
        last2=save->link;

        last1->link=first1;
        last2->link=first2;
        return;
    }
    else{
        for(int i=1;i<=pivot;i++){
        save=save->link;
    }

    first1=first;
    last1=save;

    first2=save->link;
    last2=last;

    last1->link=first1;
    last2->link=first2;
    }

}

void display(struct node* first){
    struct node* save=first;

    do{
        printf("INFO : %d\n",save->info);
        save=save->link;
    }while(save!=first);
}