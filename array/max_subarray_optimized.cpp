#include<iostream>
using namespace std;

int maxsubarraysum(int *arr,int n){
int maxsum=INT32_MIN;
for(int start=0;start<n;start++){
   int currsum=0;
   for(int end=start;end<n;end++){
    currsum+=arr[end];
    maxsum=max(maxsum,currsum);
   }
}

return maxsum;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    
    cout<<"maximum subarray sum is equal to "<<maxsubarraysum(arr,5);
    
    return 0;
}