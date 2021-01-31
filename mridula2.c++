NAME:MRIDULA.R, EMAIL:mridularamesh3@gmail.com

#include<stdio.h>
#define R 4
#define C 4

 int mid;
 int first(bool arr[], int low, int high);
 {
     if(high>=low)
     {
         int mid=low+(high-low)/2;
     }
     if((mid==0|| arr[mid-1]==0)&& arr[mid])
     return mid;
     else if (arr[mid]==0)
     return first(arr,(mid+1),high);
     else
     {
         return first(arr,low,(mid-1));
     }
     return -1;
     }
     
