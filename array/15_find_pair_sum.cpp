//Find if there is a pair with a given sum in the rotated sorted Array
#include<iostream>
using namespace std;
bool sums(int arr[],int n,int key){
    // if condiyion is not applay 
   
    //  now we are travelse a array  
    int i;
    for (  i = 0; i < n-1; i++)
     if(arr[i]>arr[i+1])
        break;
    int l= (i+1)%n;
    int r= i;
    while (l!=r)
    {
        if(arr[l]+arr[r]==key)
        {
           return true;
        }
        if (arr[l]+arr[r]<key)
        {
            l= (l+1)%n;
        }
        else
        {
            r= (n+r-1)%n;
        }
        return false;
    }
    
    
}
int main(){
int arr[]={11,15,6,8,9,10};
int N = sizeof(arr) / sizeof(arr[0]);
int key = 16;
bool ind =  sums(arr,N,key);
if (ind)
{
    cout<<" true"<<endl;
}
else
{
    cout<<" false "<<endl;
}


return 0;
}
