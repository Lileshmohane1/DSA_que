#include<iostream>
using namespace std;
int maxi(int arr[],int n){
    /*int i=0;
	    int j=n-1;
	    long long int maxpro=INT16_MIN;
	    long long int start=1,end=1;
	    while(i<n && j>=0)
	    {
	        
	        start*=arr[i];
	        end*=arr[j];
	        maxpro=max(maxpro,max(start,end));
	        
	        if(arr[i]==0)
	        {
	            start=1;
	        }
	        
	        if(arr[j]==0)
	        {
	            end=1;
	        }
	        i++;
	        j--;
	        
	    }
	    
	    return maxpro;
		*/
	int maxi= INT16_MIN;
	int mini = INT16_MIN;
	int sum =1;
	if (sum==0)
	{
		sum=1;
	}
	for (int  i = 0; i < n; i++)
	{
		sum *=arr[i];
		if (sum>maxi)
		{
			maxi= sum;
		}
	}
	  sum =1;
	for (int  i = n-1; i>=0; i--)
	{
			sum *=arr[i];
		if (sum>mini)
		{
			mini= sum;
		}
	}
	return max(maxi,mini);
	 }
int main(){
int arr[6]={2,3,4,5,-1,0};

int ma= maxi(arr,6);
cout<<ma;
return 0;
}
