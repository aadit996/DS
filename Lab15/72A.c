#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node* lptr;
	struct node* rptr;
};

struct node* first=NULL;

struct node* last=NULL;

void insertAtfirst(int n);

void insertAtEnd(int n);

void delete(int n);

void display();

void main(){
	// insertAtfirst(1);
	// insertAtfirst(2);
	// insertAtfirst(3);
	// insertAtfirst(4);

    insertAtEnd(1);
	insertAtEnd(2);
	insertAtEnd(3);
	insertAtEnd(4);
	
	delete(3);
	
	display();
	
	
}

void insertAtEnd(int n){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	
	newNode->info=n;
	newNode->lptr=NULL;
	newNode->rptr=NULL;

	
	if(first ==	NULL){
		first=newNode;
		last=newNode;
		first->lptr=NULL;
	} 
	else{
		last->rptr=newNode;
		newNode->lptr=last;
		last=newNode;
	}
}

void delete(int n){
	struct node* save=first;
	
	int count=0;
	
	while(save!=NULL){
		save=save->rptr;
		count++;
	}
	
	if(count<n){
		printf("Enter valid position\n");
		return;
	}
	else if(n==1){
		save=first;
			first=save->rptr;
			first->lptr=NULL;
	}
	else if(n==count){
		save=first;
		while(save->rptr!=NULL){
		save=save->rptr;
	}
	
	save->lptr->rptr=NULL;
	
	}
	else{
		struct node* pred=first;
		save=first;
		int i=1;
		while(i<n){
			pred=save;
			save=save->rptr;
			i++;
		}
		
		pred->rptr=save->rptr;
		save->rptr->lptr=pred;
		
	}
}

void display(){
	struct node* save=first;
	
	while(save != NULL){
		printf("INFO : %d\n",save->info);
		save=save->rptr;
	}
}

void insertAtfirst(int n){
	
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	
	newNode->info=n;
	newNode->lptr=NULL;
	newNode->rptr=NULL;
	

	if(first == NULL){
		first=newNode;
		last=newNode;
	}
	else{
		newNode->rptr=first;
		first->lptr=newNode;
		first=newNode;		
	}
}
