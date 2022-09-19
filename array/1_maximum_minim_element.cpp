
  
  // C++ program of above implementation
#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
  int min;
  int max;
};

Pair getMinMax(int arr[], int n)
{
  struct Pair minmax;  
  
 
  
    minmax.max = arr[0];
    minmax.min = arr[0];  
    for (int i = 1; i < n; i++)
    {
      if (arr[i]> minmax.max )
      {
         minmax.max =arr[i];
      }
      else if (arr[i]<minmax.min)
      {
        minmax.min=arr[i];
      }
      
    }
    
  return minmax;
}

// Driver code
int main()
{
  int arr[] = { 1000, 11, 445,1, 330, 3000 };
  int arr_size = 6;
  
  struct Pair minmax = getMinMax(arr, arr_size);
  
  cout << "Minimum element is "<< minmax.min << endl;
  cout << "Maximum element is " << minmax.max;
    
  return 0;
}

