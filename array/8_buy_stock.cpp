#include<iostream>

using namespace std;
//  best time to bay and sella stock  to get a maximum profit 
int maxprofit(int arr[],int n){
    int minm =arr[0];
    int maxele=0;
    for (int i = 0; i < n; i++)
    {
        minm= min(minm,arr[i]);
        maxele=max(maxele,arr[i]-minm);

    }
    return maxele;
}

int main(){
int arr[]={7,1,5,3,6,4};
int n = maxprofit(arr,6);
cout<<"max profit is "<<n<<endl;
return 0;
}
