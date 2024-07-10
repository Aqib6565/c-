#include<iostream>
using namespace std;

int maxsumsub(int *arr,int n){
int maxsum=INT32_MIN;
for(int start=0;start<n;start++){
    for(int end=start;end<n;end++){
        int currsum=0;
        for(int i=start;i<=end;i++){
         currsum += arr[i];
         maxsum = max(currsum,maxsum);
        }
    }
}
return maxsum;
}



int main()
{
 int arr[]={1,2,3,4,5};
 
 cout<<maxsumsub(arr,5);

    return 0;
}