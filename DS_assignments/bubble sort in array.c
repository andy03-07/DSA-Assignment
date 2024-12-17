// Assignment No. 3 
// Array operation 
// Sorting 
// (Selection and bubble sort) 
// Searching 
// (Binary Search) 
// Program A 
// Bubble Sort 
#include<stdio.h>

 void main() 
 {
int arr[10], n, temp; 
printf("Enter the number of elements in array: "); scanf("%d", &n); 
printf("Enter array elements: \n"); 
for(int i = 0; i < n; i++) 
{ 
scanf("%d", &arr[i]); 
}
printf("Before sorting: \n");
 for(int i = 0; i < n; i++) {
printf("%d ", arr[i]); 
 }
printf("\n"); 
for (int i = 0; i < n; i++) {
for(int j = i + 1; j < n; j++)
{ 
if(arr[i]> arr[j]) 
{  
temp = arr[i];  
arr[i] = arr[j]; 
 
arr[j] = temp; 
} 
} 
} 
printf("After sorting: \n");
 for (int i = 0; i < n; i++) {
printf("%d ", arr[i]); 
 }
printf("\n"); 
} 
