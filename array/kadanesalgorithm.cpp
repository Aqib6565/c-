#include<iostream>
using namespace std;

int maxsubsum(int *arr,int n){
int maxsum=INT32_MIN;
int currsum=0;
for(int i=0;i<n;i++){
  currsum+=arr[i];
   maxsum=max(currsum,maxsum);
  if(currsum<0){
   currsum=0;
  }
}
return maxsum;
}

int main()
{ 

   int arr[]={1,2,3,4,5};
   int n=5;
   cout<<maxsubsum(arr,5);

    return 0;
}