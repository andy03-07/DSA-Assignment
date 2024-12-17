#include<stdio.h> 
void main() 
{ 

int num[10],n,x,found=0; 
printf("enter no of elements: "); 
scanf("%d", &n); 
printf("enter array elements :"); 
for(int i=0;i<n;i++) 
{ 
scanf("%d", &num[i]); 
}
printf("enter specific elements you want to search :"); scanf("%d", &x); 
for(int i=0;i<n;i++) 
{ 
if(x==num[i]) 
{ 
found=num[i]; 
printf("element found at : %d",i);  
}
}
 
if(found==0) 
{ 
printf("element not found"); 
}  
}
