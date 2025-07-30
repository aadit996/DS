#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[50];
    struct node* lptr;
    struct node* rptr;
};

struct node* addSong(struct node* first);

struct node* removeSong(struct node* first);

struct node*addMultipleSong(struct node* first);

void display(struct node* first);

void main(){
    struct node* first=NULL;

    while(1){
        int n;
        printf("Enter 1 to add song : \nEnter 2 remove song : \nEnter 3 to add multiple song : \nEnter 4 to display all song : \nEnter 5 to exit and display : \n");
        scanf("%d",&n);

        switch(n){
            case 1:first=addSong(first);
            break;

            case 2:first=removeSong(first);
            break;

            case 3:first=addMultipleSong(first);
            break;

            case 4:display(first);
            break;
        }

        if(n == 5){
            display(first);
            break;
        }
    }
}

struct node* addSong(struct node* first){
    char str[50];
    printf("Enter name of song : ");
    scanf("%s",&str);

    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    strcpy(newNode->name,str);
    newNode->lptr=NULL;
    newNode->rptr=NULL;

    if(first == NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        first=newNode;
    }
    else{
        struct node* save=first;
        while(save->rptr != NULL){
            save=save->rptr;
        }

        save->rptr=newNode;
        newNode->lptr=save;
    }
    return first;
}

struct node* removeSong(struct node* first){

    int song=0;
    struct node* save=first;
    while(save != NULL){
        song++;
        save=save->rptr;
    }

    int postion=0;
    printf("Enter Postion of song to be deleted : ");
    scanf("%d",&postion);

    if(postion>song){
        printf("Enter valid postion");
        return first;
    }
    else{
        save=first;

        if(postion == 1){
            first=save->rptr;
            first->lptr=NULL;
            free(save);
            return first;
        }
        else if(postion == song){
            while(save->rptr!=NULL){
                save=save->rptr;
            }
            save->lptr->rptr=NULL;
            free(save);
            return first;
        }
        else{
            for(int i=1;i<postion;i++){
                save=save->rptr;
            }
            save->lptr->rptr=save->rptr;
            save->rptr->lptr=save->lptr;
            free(save);
            return first;
        }
        
    }
}

struct node*addMultipleSong(struct node* first){
    int n;
    printf("Enter number of songs to be added : ");
    scanf("%d",&n);

    struct node* save=first;
   if(first != NULL){
        while(save->rptr != NULL){
        save=save->rptr;
    }
   }

    int i=0;
    while(i<n){
        char str[50];
        printf("Enter a song : ");
        scanf("%s",&str);

        struct node *newNode=(struct node*)malloc(sizeof(struct node));

        strcpy(newNode->name,str);
        newNode->lptr=NULL;
        newNode->rptr=NULL;

        if(first == NULL){
            first=newNode;
            save=newNode;
        }
        else{
            save->rptr=newNode;
            newNode->lptr=save;
            save=newNode;
        }

        i++;
    }
    return first;
}

void display(struct node* first){
    struct node* save=first;
    while(save != NULL){
        printf("Song : %s\n",save->name);
        save=save->rptr;
    }
}