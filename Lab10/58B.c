#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

void createAndCompareList(struct node *firstA,struct node *firstB);

void displayA(struct node *firstA);//will display list A

void displayB(struct node *firstB);//will display list B

void main(){
    struct node *firstA=NULL;
    struct node *firstB=NULL;

    createAndCompareList(firstA,firstB);

}

void displayA(struct node *firstA){
    struct node *temp=firstA;

    while(temp!=NULL){
        printf("INFO of A : %d\n",temp->info);
        temp=temp->link;
    }

}

void displayB(struct node *firstB){
    struct node *temp=firstB;

    while(temp!=NULL){
        printf("INFO of B : %d\n",temp->info);
        temp=temp->link;
    }

}

void createAndCompareList(struct node *firstA,struct node *firstB){
    int a,b;

    printf("Enter number of nodes in list A : ");
    scanf("%d",&a);
    printf("Enter number of nodes in list B : ");
    scanf("%d",&b);

    int i=0;
    struct node *save=firstA;
    while(i<a){//make a linked list of A
        struct node *newNode=(struct node*)malloc(sizeof(struct node));
        
        int num;
        printf("Enter INFO A : ");
        scanf("%d",&num);

        newNode->info=num;
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
    displayA(firstA);

    i=0;
    while(i<b){//make a linked list of B
        struct node *newNode=(struct node*)malloc(sizeof(struct node));
        
        int num;
        printf("Enter INFO B : ");
        scanf("%d",&num);

        newNode->info=num;
        newNode->link=NULL;

        if(firstB == NULL){
            firstB=newNode;
            save=newNode;
        }
        else{
            save->link=newNode;
            save=newNode;
        }
        i++;
    }
    displayB(firstB);

    struct node *tempA=firstA;
    struct node *tempB=firstB;
    
    int same=1;

    while(tempA != NULL && tempB != NULL){//to check till if last node is null 
        if(tempA->info != tempB->info){//will break if two nodes does not c=have same info
            same=0;
            break;
        }
        tempA=tempA->link;       
        tempB=tempB->link;       
    }

    if(same == 1 && tempA == NULL && tempB == NULL){
        printf("Both linked list are same");
    }
    else{
        printf("Both linked list are differnt");
    }
}
