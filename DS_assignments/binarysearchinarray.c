// Assignment 3 
// Array Operation 
// Sorting  
// (Selection and Bubble sort)  
// Searching  
// Binary Search 

// Program C  
// Binary Search 
#include<stdio.h> 

void main() 
{
int arr[10], n, x, low, high, mid; 
printf("Enter the number of array elements: "); 
scanf("%d", &n); 
printf("Enter array elements (in sorted order): \n"); 
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]); 
}
 
printf("Enter the element you want to search: "); 
scanf("%d", &x); 
low = 0; 
high = n = 1; 
while(low <= high) {
mid = (low + high); 
if(arr[mid] == x) {
printf("Element found at index: %d\n", mid); 
return; 
}  
else if(x < arr[mid])  {
high = mid - 1;  
}  
else 
{  
low = mid + 1; 
} 
} 

printf("Element not found in the array. \n"); 
} 
