#include<iostream>
using namespace std;

void reversearr(int *arr,int n){
   int start=0,end=n-1;
   while(start<end){
   swap(arr[start],arr[end]);
   /*
   !##########OR############
    

    

   !######################
   */
   start++;
   end--;
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
    reversearr(arr,n);
    return 0;
}