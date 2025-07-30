#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* link;
};

struct node* first=NULL;

struct node* last=NULL;

void insertAtFirst(int n);

void display();

void deleteNodeFromSpecifiedPosition(int pos);

void insertAtEnd(int n);

void main(){
    // insertAtFirst(1);
    // insertAtFirst(2);
    // insertAtFirst(3);
    // insertAtFirst(4);

    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    

    // deleteNodeFromSpecifiedPosition(4);

    display();
}

void insertAtFirst(int n){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=n;
    newNode->link=NULL;

    if(first == NULL){
        first=newNode;
        last=newNode;
        newNode->link=first;
    }
    else{
        newNode->link=first;
        last->link=newNode;
        first=newNode;
    }
}

void display(){
    struct node* save=first;
    do{
        printf("INFO : %d\n",save->info);
        save=save->link;
    }while(save != first);
}

void deleteNodeFromSpecifiedPosition(int pos){
    int numOfnodes=0;
    struct node* save=first;

    do{
        numOfnodes++;
        save=save->link;
    }while(save != first);

    if(pos>numOfnodes){
        printf("Enter valid position");
    }

    else{

        save=first;
        struct node *pred=NULL;

        if(pos==1){
            last->link=save->link;
            first=save->link;
        }

        else{
            for(int i=1;i<pos;i++){
            pred=save;
            save=save->link;
        }

        pred->link=save->link;
        free(save);

        }


    }
}

void insertAtEnd(int n){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=n;
    newNode->link=NULL;

    if(first==NULL){
        first=newNode;
        last=newNode;
        newNode->link=first;
    }
    else{
        newNode->link=first;
        last->link=newNode;
        last=newNode;
    }
}