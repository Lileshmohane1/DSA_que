#include<iostream>
using namespace std;
//  find a missing number in 
/*int miss(int ar[],int n){
    int first = n+1;
    int total= first*(first+1)/2;
    int sum =0;
    int t ;
    for (int  i = 0; i < n ; i++)
    {
       sum+=ar[i];
     t= total -sum;
    }
    return(t);
}
*/
//  now 3wee are use xor operation 

//  this is missing element 
int miss(int ar[],int n){
    int xor1= ar[0];
    for (int  i = 1; i < n; i++)
    {
        xor1 = xor1^ar[i];
    }
    int xor2= 1;
    for (int  i = 2; i < n+1; i++)
    {
       xor2 = xor2^i;
    }
    return(xor1^xor2);
}
int repe(int arr[],int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    
    {
       if(arr[i]==arr[i+1]){
       sum = arr[i];
       }
    }
    return  sum;
    
} 
int main(){
int ar[6]={1,2,3,4,6};
int arr[5]={1,2,2,3,4};

int ind= miss(ar,6);
int re = repe(arr,5);
cout<<" missing element is  "<<ind<<endl;
cout<<"repeat  element is  "<<re<<endl;
return 0;
}
