#include<iostream>
using namespace std;
//prooduct of arr exeept self
int pro(int arr[],int n){
   int product[n];
  
   for (int  i = 1; i < n; i++)

   {
    product[i]= arr[i-1]*product[i-1];
   }
   int suff=1;
   for (int  i = n-1; i >0; i--)
   {
    product[i]=product[i]*suff;
    suff= suff*arr[i];
   }
   return product;
}
int main(){
int arr[5]={1,2,3,4,5};
int index=  pro(arr,5);
cout<<" the product is : "<<index;
return 0;
}
