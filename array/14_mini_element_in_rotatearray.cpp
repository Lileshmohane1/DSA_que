#include<iostream>
using namespace std;
//  minimun element present in sortes array
/*
//  solve in  travelser 
int small(int arr[],int n,int key){
   for (int  i = 0; i < n; i++)
   {
    if (arr[i]>arr[i+1])
    {
        key=arr[i+1];
    }
    
   }
   return key;
}
*/
 //now solve in  binary  search
int small(int arr[], int n){
     int  s= 0;
 int  e= n-1;
  int mid= s+(e-s)/2;
   while (s<e)
   {
   if (arr[mid]>arr[0])
   {
   s =mid+1;
   }
   else
   {
    e= mid;
   }
   mid =s+(e-s)/2;
   }
  int ans = arr[s];
  if(s==n-1)
  ans= min(arr[0],arr[s]);
   return ans;
}
int main(){
    int arr[5]={3,4,5,1,2};
    //int n =5;
    // int key;
   int ind =  small(arr, 5);
   cout<<" small element is: "<<ind;
return 0;
}
