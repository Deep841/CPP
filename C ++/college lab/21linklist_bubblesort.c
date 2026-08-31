//1: by exchanging data
//2: by exchaning links
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int info;
    struct node *link;
};
struct node *createList(struct node *start);
void displayList(struct node *start);
struct node *insertInbeginning(struct node *start ,int data);
void insertAtEnd(struct node *start, int data);
void sortingByExhangingData(struct node *start);

mian(){
    struct node* start1=NULL, *start2=NULL;

    printf("create first link list \n");
    start1 = createList(start1);
    sortingByExhangingData(start1);
    displayList(start1);

    printf("create second list \n");
    start2 = createList(start2);

}