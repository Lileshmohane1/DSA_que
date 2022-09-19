#include<iostream>
using namespace std;
//  we chack  a water canten  in a
int trape(int arr[],int n){
    int left[n];
    int right[n];
    left[0]=arr[0];
    for (int  i = 1; i < n; i++)
    {
      left[i]= max(left[i-1],arr[i]);
    }
    right[n-1]= arr[n-1];
    for (int  i = n-2; i>=0; i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    int water=0;
    for (int  i = 0; i < n; i++)
    {
       water += (min(left[i],right[i])-arr[i]);
    }
    return water;
}
int main(){
int arr[7]={0,1,0,2,0,3,2};
int ind = trape(arr,7);
cout<<"water present in array : "<<ind<<endl;
return 0;
}
