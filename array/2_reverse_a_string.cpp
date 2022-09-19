#include<iostream>
using namespace std;
//  reverse a arrray 
void reverse(int arr[],int n){
    int st=  0;
    int end= n-1;
    while (st<=end)
    {
       swap(arr[st++],arr[end--]);
    }
    
} 
void print (int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
       cout<<arr[i]<<"  ";
    }
    
}
int main(){
int arr[5]={1,2,3,4,5};
reverse(arr,5);
print(arr,5);
return 0;
}