/*
#include<iostream>
using namespace std;
//  search a rotate sorted array  
int sort(int arr[],int n){
    int ans ;
    for (int  i = 0; i <n; i++)
    {
        int diff= arr[i+1];
     if (arr[i]>diff)
     
        return diff;
    }
   
}
int main(){

int arr[8]={5,6,7,8,9,1,2,3};
int nid = sort(arr,8);
cout<<nid;
return 0;
}
*/
#include<iostream>
using namespace std;
//  first we get pvt element in array 
int getpvt(int arr[],int n){
    int s= 0;
    int e= n-1;
    int m =  s+(e-s)/2;
  while (s<=e)
  {
  if (arr[m]>arr[0])
  {
   s= m+1;
  }
  else
  {
    e=m;
  }
  }
  return s;
}
//  now  we apply binary  search
int binary(int arr[],int n ,int key){
    int s= 0;
    int e= n-1;
    int m =  s+(e-s)/2;
  while (s<=e)
  {
    if (arr[m]==key)
    {
        return key;
    }
    
  if (arr[m]<key)
  {
   s= m+1;
  }
  else
  {
    e=m-1;
  }
  m =s+(e-s)/2;
}
return -1;
}
//  now we find pvt element present in our present roted sorted array 
int findpvt(int arr[],int n,int key){
    int pvt = getpvt(arr,n);
    if (arr[pvt]<=key&&key<arr[n-1])
    {
      return binary(arr,pvt,n-1,key);
    }
    else
    {
       return binary(arr,0,pvt-1,key);
    }
}
int main(){
int arr[8]={5,6,7,8,9,1,2,3};
int nid = findpvt(arr,8);
cout<<nid;
return 0;
}

