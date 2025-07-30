#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

struct node* replace(struct node *first);

void display(struct node *first);

void main(){
    first = replace(first);

    display(first);
}

struct node* replace(struct node *first){
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

    int p;
    printf("Enter position to be replaced : ");
    scanf("%d",&p);

    int f=p,l=index-p+1;

    struct node* fp=save;
    struct node* lp=save;

    for(int i=1;i<f;i++){
        fp=fp->link;
    }
    for(int i=1;i<l;i++){
        lp=lp->link;
    }
    int temp = fp->info;
    fp->info=lp->info;
    lp->info=temp;


    return first;  
}

void display(struct node *first){
    struct node *save=first;

    while(save != NULL){
        printf("INFO : %d\n",save->info);
        save=save->link;
    }
}