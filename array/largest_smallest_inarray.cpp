#include<iostream>
using namespace std;

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
    int min = arr[0];
    int max = arr[0];
    
    for(int i=0;i<n;i++){
    if(max<arr[i]){
    max = arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
    
    }
    cout<<"Largest number in array is "<<max<<endl;
     cout<<"smallest number in array is "<<min;
    return 0;
}