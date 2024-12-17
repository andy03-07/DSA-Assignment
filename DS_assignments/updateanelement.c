// Assignment No. 1 
// Array operation 
// (Creation of an array and search a specific element in that array) 
// Program B 
 // update an element 
#include<stdio.h> 
 void main() 
 {
int arr[10],n,x,y,temp; 
printf("enter no of elements in array :"); 
scanf("%d", &n); 
printf("enter array elements :"); 
for(int i=0;i<n;i++) 
{ 
scanf("%d", &arr[i]); 
} 
printf("enter new element :"); 
scanf("%d", &x); 
printf("enter array element you want to update :"); 
scanf("%d", &y); 
for(int i=0;i<n;i++)  
{  
if(arr[i]==y)  
{ 
temp=arr[i];  
arr[i]=x; 
x=temp; 
} 
}  
printf("updated array :"); 
for(int i=0;i<n;i++) {
printf("%d", arr[i]); 
} 
} 
