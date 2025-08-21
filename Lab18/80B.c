  #include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* lptr;
    struct node* rptr;
};

// to create a new node
struct node* createNode(int n){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=n;
    newNode->lptr=NULL;
    newNode->rptr=NULL;

    return newNode;
}

struct node* insertNode(int n,struct node* root){
    if(root == NULL){
        return createNode(n);
    }
    else if(n > root->info){
        root->rptr=insertNode(n,root->rptr);
    }
    else if(n < root->info){
        root->lptr=insertNode(n,root->lptr);
    }
    return root;
}

int maxVal(struct node* root,int l){
    if(root == NULL){
        return l;
    }
    l=maxVal(root->rptr,root->info);
    
    
}
int minVal(struct node* root,int m){
    if(root == NULL){
        return m;
    }
    m=minVal(root->lptr,root->info);
}

// find max (rightmost)
// int maxVal(struct node* root){
//     if(root == NULL){
//         printf("Tree is empty!\n");
//         return -1;  // or INT_MIN
//     }
//     while(root->rptr != NULL){
//         root = root->rptr;
//     }
//     return root->info;
// }

// // find min (leftmost)
// int minVal(struct node* root){
//     if(root == NULL){
//         printf("Tree is empty!\n");
//         return -1;  // or INT_MAX
//     }
//     while(root->lptr != NULL){
//         root = root->lptr;
//     }
//     return root->info;
// }

struct node* root=NULL;// for root node

void main(){
    root=insertNode(5,root);
    root=insertNode(4,root);
    root=insertNode(1,root);
    root=insertNode(8,root);
    root=insertNode(9,root);
    root=insertNode(2,root);

    int l=root->info;
    int m=root->info;

    int largest = maxVal(root,l);
    printf("Largest node : %d\n",largest);
    
    int min = minVal(root,m);
    printf("Smallest node : %d",min);


}