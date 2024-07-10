#include<iostream>
using namespace std;

void printsubarray(int *arr,int n){

for(int start=0;start<n;start++){ //start and end are indices

for(int end=start;end<n;end++){
  
  for(int i=start;i<=end;i++){
    cout<<arr[i]<<" ";
  }
 cout<<endl;
}
cout<<endl;
}

}

int main()
{ 
    int arr[]={1,2,3,4,5};
    int n=5;

    printsubarray(arr,n);


    return 0;
}


/*

!## TIME COMPLEXITY:-

? TC=O(n^3)

can be reduced using string concept.......


*/