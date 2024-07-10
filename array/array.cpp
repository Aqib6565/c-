/*

!## ARRAYS:-
linear collection of same type of elements that are stored together in
contiguous(consicutive and continously) memory spaces...

!## INDEX OF ARRAY:-
it indicates position of each element in the array
it starts with 0 to n-1 if length of array is 7(it stores 7 elements)
so postions are from 0 to 6...

!## CREATING AN ARRAY:-
?#datatype name[size]={element1,element2,....}"

-> values inside an array can be accessed using 
!## name[index of element] --> behaves as a variable..
-> if array left empty , it  stores garbage value..
-> if some elements of array are assigned some values , other automaticaly
becomes zero..

-> if size of array is not assigned then it automatically sets its size 
equal to number of elements
->if an element out of array is being accessed an error is generated..
in the case random values can show up on screen

? memory is statically allocated(at compile time)

!## DISPLAYING OUTPUT IN ARRAY:-
int arr[n];
for(int i=1;i<n;i++){
cout<<arr[i];
}

!## TAKING INPUT IN ARRAY:-
int arr[n];
for(int i=1;i<n;i++){
cin>>arr[i];
}

!## arrays are always passed by refernce(address)

 in c++ , the name of an array is always converted internally into
 a pointer...
 this can be proved using:-  cout<<arr;
output of this is an address in hexadecimalsystem
? it means it is refering to an address (to the index 0) 















*/


#include<iostream>
using namespace std;

void printarr(int nums[],int n){
   for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
   }
   
}

int main()
{

   int arr[5]={2,3,5,7,9};
   printarr(arr,5);


    return 0;
}




/*
 int arr[5]={1,3,5,7,9};
 cout<<arr<<" = "<<&arr[0]<<endl;
 cout<<*arr<<"\n";
 cout<<*(arr+1);

!    int marks[50];
    0 to 49 , an array of 50 elements with garbage values

!    int marks[50]={1,2,3};
    0 to 49 , an array of 50 elements , inital three are assigned 1,2,3 other are automatically zero

 int marks[]={1,2,3};
    0 to 2 , an array of 3 elements..
   
 cout<<marks[2]<<endl;
 cout<<marks[1]<<"\n";
 cout<<sizeof(marks);
 4byte of each integer and there are 3 of them(0 to 2) so "4*3=12"
! length of array*size of each datatype = size of array
? length of array = size of array / size of each datatype
*/
