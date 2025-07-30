#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first = NULL;



void display();

void inserAtFirst();

void deleteFirst();

void insertAtEnd();

void deleteLastNode();

void deleteNodeSpecifiedPosition();

void countNodes();


void main(){
	// first=(struct node*)malloc(sizeof(struct node));
	// first->info=10;
	// first->link=NULL;

	first=(struct node*)malloc(sizeof(struct node));
    first->info=45;
    first->link=NULL;

    struct node *node2=(struct node*)malloc(sizeof(struct node));
    node2->info=55;
    node2->link=NULL;
    first->link=node2;

    struct node *node3=(struct node*)malloc(sizeof(struct node));
    node3->info=65;
    node3->link=NULL;
    node2->link=node3;
	
	
//	inserAtFirst();
//  insertAtEnd();
//  deleteLastNode();
//  deleteFirst();
//  deleteNodeSpecifiedPosition();
    countNodes();
	   
}
   
void display(){
	struct node *temp=first;
	while(temp!=NULL){
		printf("INFO : %d\n",temp->info);
		temp=temp->link;
	}
}

void inserAtFirst(){
	int n;
	printf("Enter a value : ");
	scanf("%d",&n);
	
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->info=n;
	newNode->link=NULL;
	
		
	
	if(first == NULL){
		printf("Empty Linked list");
		first=newNode;
	}
	else{
		newNode->link=first;
		first=newNode;
		
		display();
	}
}

void deleteFirst(){
	if(first == NULL){
		printf("Linked list is empty");
	}
	else{
	    struct node *save=first;
	    first=save->link;
		display();
	}
}

void insertAtEnd(){
	int n;
	printf("Enter a value : ");
	scanf("%d",&n);
	
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->info=n;
	newNode->link=NULL;
	
	if(first == NULL){
		printf("Empty Linked list");
		first=newNode;
	}
	else{
		struct node *save=first;
		
		while(save->link != NULL){
			save=save->link;
		}
		
		save->link=newNode;
		
		display();
	}
}

void deleteLastNode(){		     
	struct node *save=first;
    struct node *pred;

	if(save == NULL){
		printf("Linked list is empty ");
	}
	if(save->link == NULL){
		printf("Only one node exisits which is deleted");
		free(first);
		first=NULL;
		display();
	}
	else{
		while(save->link != NULL){
			pred=save;
			save=save->link;
		}
        
		pred->link=NULL;
		
		display();
	}
}

void deleteNodeSpecifiedPosition(){
	int n;
	printf("Enter INFO of node to be deleted : ");
	scanf("%d",&n);

	struct node *save=first;
	struct node *pred;

	if(first == NULL){
		printf("Linked list is empty");
	}

	else if(n == save->info){
         first=first->link;
		 
	}

	else if(!(n == first->info)){

		while(save->link   != NULL){
			pred=save;
			save=save->link;
			if(n==save->info && save != NULL){
				pred->link=save->link;
				break;
			}
		}
		
		display();
	}
}

void countNodes(){
	struct node *save=first;
	int count=0;

	while(save!=NULL){
		save=save->link;
		count++;
	}

	printf("Number of nodes : %d",count);
}