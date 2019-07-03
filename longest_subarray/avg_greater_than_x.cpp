
// C program to find Longest subarray 
// having average greater than or equal 
// to x. 
#include <stdio.h> 
  
// Function to find Longest subarray having average 
// greater than or equal to x. 
int max_subarray(int arr[],int x,int n) 
{ 
    int length=0 ,temp =0 ; 
    int max=0,sum=0,i; 
    for(i=0;i<n;i++) 
    {  
        sum = sum+arr[i]; 
        temp++; 
        if(sum>max && sum/temp>=x && temp>=length) 
        { 
            max= sum ; 
            length =temp; 
        } 
        if(sum<0) 
        { 
            sum=0; 
            temp=0; 
        } 
          
    } 
  
return length;  
} 
  
// Drive Code 
int main() { 
int arr[] = {-2, 1, 6, -3 }; 
int x = 2; 
int n = sizeof(arr)/sizeof(int); 
int length = max_subarray(arr,x,n); 
printf("%d",length); 
return 0; 
} 
