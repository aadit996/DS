#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *first=NULL;

struct node* createList(struct node *first){
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
		
		
		if(first==NULL){
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
	
	while(save->link != NULL){
		
		struct node* next=save->link;
		
	int min;
	
	if(save->info > save->link->info){
		min=save->link->info;
	}
	else{
		min=save->info;
	}
	
	int i,gcd;
	for(i=min;i>=1;i--){
		if(save->info%i==0 && save->link->info%i==0){
			gcd=i;
			break;
		}
	}
	
	
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
		
		newNode->info=gcd;
		newNode->link=NULL;
		
		save->link=newNode;
		newNode->link=next;
		
		save=next;
	
}
	
	return first;
}

void display(struct node *first){
	struct node *save=first;
	while(save!=NULL){
		printf("INFO : %d\n",save->info);
		save=save->link;
	}
}

void main(){
	first=createList(first);
	
	display(first);
	
}








