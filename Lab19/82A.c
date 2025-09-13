#include<stdio.h>
#include<stdlib.h>

struct AdjNode{// list of nodes upto the destination node
    int des;
    struct AdjNode* next;
};

struct Graph{//contains all vertex of graph
    int V;
    struct AdjNode** array;
};

struct AdjNode* newAdjNode(int des){
    struct AdjNode* node=(struct AdjNode*)malloc(sizeof(struct AdjNode));
    node->des=des;
    node->next=NULL;
    
    return node;
}

struct Graph* createGraph(int V){// number of vertex from Graph V and initialize all null 
    struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->V=V;
    graph->array=(struct AdjNode*)malloc(V*sizeof(struct AdjNode));

    for(int i=0;i<V;i++){
        graph->array[i]=NULL;
    }
}



void main(){}