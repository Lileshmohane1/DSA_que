#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool dupli(int arr[],int n){

    // first we sort a array
    sort(arr, arr + n);
    // first travelse a array 
 
    for (int  i = 0; i < n; i++)
    {
        //  then  chack elemen is equal other element 
       if (arr[i]==arr[i+1])
       {
        //  if it true so return  true oterwise written false
         return true;
       }
       
    }
    return false;
    
}
int main(){
//  now find a duplicate element in array
int arr[5]={1,2,3,4,3};
bool index= dupli(arr,5);
if (index)
{
    cout<<"  your element is duplicaote :"<<endl;
}
else
{
    cout<<"  not a duplicate element  present :"<<endl;
}

return 0;
}