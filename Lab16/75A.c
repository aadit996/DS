#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* root=NULL;

struct node* createNode(int x){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=x;
    newNode->lptr=NULL;
    newNode->rptr=NULL;

    return newNode;
}

struct node* insertNode(int n,struct node *temp){
    if(temp==NULL){
        temp = createNode(n);
        
    }

    if(n>temp->info){
        temp->rptr=insertNode(n,temp->rptr);
    }
    else if(n<temp->info){
        temp->lptr=insertNode(n,temp->lptr);
    }
    return temp;
}

void search(int n,struct node *save){

    if(save == NULL){
      
        return;
    }

    if(n==save->info){
        printf("%d found\n",save->info);
        return;
    }
    search(n,save->lptr);
    search(n,save->rptr);

    printf("Element not found\n");
}

void preorderTraversal(struct node* save){
    if(save==NULL){
        return;
    }
 
    printf("%d ",save->info);
    preorderTraversal(save->lptr);
    preorderTraversal(save->rptr);

}
void inorderTraversal(struct node* save){
    if(save==NULL){
        return;
    }

    inorderTraversal(save->lptr);
    printf("%d ",save->info);
    inorderTraversal(save->rptr);

}
void posorderTraversal(struct node* save){
    if(save==NULL){
        return;
    }

    posorderTraversal(save->lptr);
    posorderTraversal(save->rptr);
    printf("%d ",save->info);

}

void main(){
    struct node* root=NULL;
    int n=0;
     // root = insertNode(50,root);
    // root = insertNode(15,root);
    // root = insertNode(16,root);
    // root = insertNode(60,root);


    while(n != -1){
            printf("Enter 1 to insert node\nEnter 2 to preorderTraversal \nEnter 3 to inorderTraversal\nEnter 4 to posorderTraversal\nEnter 5 to Search element\nEnter -1 to EXIT\n");
            scanf("%d",&n);

        switch(n){
            case 1:
            printf("Enter node to be inserted : ");
            int temp;
            scanf("%d",&temp);
            root=insertNode(temp,root);
            break;
            case 2:preorderTraversal(root);
            break;
            case 3:inorderTraversal(root);
            break;
            case 4:posorderTraversal(root);
            break;
            case 5:
            printf("Enter element to be searched : ");
            int z;
            scanf("%d",&z);

            search(z,root);
            break;

            default:printf("Enter valid case");
        }
        if(n == -1){
            break;
        }
    }
}