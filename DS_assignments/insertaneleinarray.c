// Assignment No. 2 
// Array operation 
// (Insertion and deletion of specific element in that array) 
// Program A 
// Insert an element 
#include<stdio.h> 
void main() 
{ 
int arr[10],n,pos,x; 
printf("enter no of elements in array :"); 
scanf("%d", &n); 
printf("enter array elements :"); 
for(int i=0;i<n;i++) {
scanf("%d",&arr[i]); 
}
printf("enter position of new element :"); 
scanf("%d", &pos); 
printf("enter array element you want to insert :"); scanf("%d", &x); 
for(int i=n-1;i>=pos;i--) {
arr[i+1]=arr[i]; 
}
arr[pos]=x; 
n++; 
printf("after insertion :"); 
for (int i=0;i<n;i++) {
printf("%d", arr[i]);  
} 
} 
