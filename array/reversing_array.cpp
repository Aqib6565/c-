#include<iostream>
using namespace std;

//extra space allowed

void reversearray(int *arr,int n){

int cArray[n];
for(int i=0;i<n;i++){
    int j = n-i-1;
    cArray[i]=arr[j];
}
for(int i=0;i<n;i++){
  arr[i]=cArray[i];
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}
int main()
{
    int n;
    cout<<"Enter the length of Array ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements "<<endl;
    
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    reversearray(arr,n);
    
 

    return 0;
}