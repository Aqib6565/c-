#include <iostream>
using namespace std;

void print2d(int arr[][3],int n,int m){  //pass atleast n or m...

for(int i=0;i<n;i++){  //for rows from 0 to n-1
  cout<<"enter elements of "<<i<<" row ";
    for(int j=0;j<m;j++){   //for coloumns from 0 to m-1
      cin>>arr[i][j];
    }
}

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
  cout<<arr[i][j]<<" ";
  }
  }
}



int main()
{

int arr[2][3];
print2d(arr,2,3);


  return 0;
}



/*

* -> 2d array although assumed to 2d , are stored linearly in the memory 

!## ROW MAJOR
assuming that 2d array is stored in row vise and in linearly form

!## COLOUMN MAJOR
assuming that 2d array is stored in coloumn vise and in linearly form


*/