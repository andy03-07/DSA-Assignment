// Assignment No 4 
// Implement a single linked list and perform operation on it like 
// create, insert, delete and traversal 
// Linked List

// Program A 
// Create a Linked List  
#include<stdio.h> 
#include<malloc.h> 
struct node 
{  
int data; 
struct node *next; 
};
 void main() {
struct node *x, *y, *z, *w; 
x=(struct node *)malloc(sizeof(struct node));
 y=(struct node *)malloc(sizeof(struct node)); 
 z=(struct node *)malloc(sizeof(struct node));
  w=(struct node *)malloc(sizeof(struct node)); 
x->data=5; 
x->next=y;  
y->data=10; 
y->next=z; 
z->data=25; 
z->next=w;  
w->data=30; 
w->next=NULL; 
struct node *temp=x; 
while(temp!=NULL) {
printf("%d\n", temp->data);
 temp=temp->next; 
}
 }
