 // Assignment No. 2 
//  Array operation 
// (Insertion and deletion of specific element in that array) 
// Program B 
// Delete an element 
#include<stdio.h> 
void main() 
{
int arr[10],n,x; 
printf("enter no of elements in array :"); 
scanf("%d", &n); 
printf("enter array elements :"); 
for(int i=0;i<n;i++) {
scanf("%d",&arr[i]); 
}
printf("enter array element you want to delete :"); 
scanf("%d", &x); 
for(int i=0;i<n;i++) 
{ 
if(arr[i]==x) 
{ 
break; 
} 
{ 
printf("element not found"); 
break; 
} 
} 
for (int i=0;i<n;i++) {
arr[i]=arr[i+1]; 
} 
n--; 
printf("after insertion :"); 
for(int i=0;i<n;i++){ 
printf("%d", arr[i],"\n"); 
} 
} 
