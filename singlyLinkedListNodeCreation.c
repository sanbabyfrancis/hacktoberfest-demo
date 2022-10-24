#include <stdio.h>
struct node{
    struct node *link;
    int data;
};
void main(){
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));
}