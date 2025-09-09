#include<stdio.h>
#include<string.h>

int n=10;

struct hmap{
    char key[20];
    char value[100];

};

hmap[10];

void init(char key[]){
    
}

int f(char key[]){
    int temp;
    for(int i=0;key[i]!='\0';i++){
        temp+=key[i];
    }

    return temp%10;
}



void main(){}
