
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void  per(vector<int>&arr,int n){
    
    int ind= -1;

    for (int  i = n-1 ; i >=0; i--)
    {
     if (arr[i]>arr[ind-1])
     {
        ind=i;
        break;
     }
     
    }
        if (ind=-1)
        {
           sort( arr.begin(),arr.end());
        }
        else
        {
            int pev= ind;
           for (int  i = ind+1; i < n; i++)
           {
            if (arr[i]>arr[ind-1]&&arr[i]<=arr[pev])
            {
               pev= i;
            }
            
           }
           swap(arr[i-1],arr[pev]);

           
           sort( arr.begin()+ind,arr.end());
        }
        
    
   
}
void  print (int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}
int main(){
   
int arr[]={1,5,8,4,7,6,5,3,1};//  we area going left to right 

print(arr,n);
per(arr,n);
return 0;
}

