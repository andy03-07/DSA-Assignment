// Assignment No. 3 
// Array operation 
// Sorting  
// (Selection and bubble sort)  
// Searching  
// (Binary Search) 

// Program B 
// Selection Sort 
#include<stdio.h> 

 void main() 
 {
int arr[10], n, min, temp; 
printf("Enter the number of elements in the array: "); 
scanf("%d", &n); 
printf("Enter array elements: \n"); 
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]); 
}
printf("Before sorting: \n"); 
for(int i = 0; i < n; i++) {
printf("%d ", arr[i]); 
}
printf("\n"); 
for(int i = 0; i < n; i++) {
min = i; 
for (int j = i + 1; j < n; j++) {
if(arr[min] > arr[j]) 
{ 
min = j; 
} 
} 
temp = arr[i]; 
arr[i] = arr[min]; 
arr[min] = temp;  
} 
printf("After sorting: \n"); 
for(int i = 0; i < n; i++) {
printf("%d", arr[i]);
} 
printf("\n"); 

 }