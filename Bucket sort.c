#include <stdio.h>
#include <stdlib.h>
struct node{
       char data[16];
       struct node *next;
};
void addNode(struct node *q, char *d);
void print();
int main()
{
    int i;
    struct node *nodesArr[20];
    struct node *temp;

temp = nodesArr[i]; // i is declared and its less than 20
addNode(temp,10);
}

void addNode(struct node *q, char *d)
{
    if(q == NULL)
        q = malloc(sizeof(struct node));
    else{
        while(q->next != NULL)
            q = q->next;

        q->next = malloc(sizeof(struct node));
        q = q->next;
    }

    q->data = d; // this must done using strncpy
    q->next = NULL;
}

void print(){
    int i;
    struct node *temp;

    for(i=0 ; i < 20; i++){
        temp = nodesArr[i];
        while(temp != NULL){
            printf("%s\n",temp->data);
            temp = temp->next;
        }
    }
}
