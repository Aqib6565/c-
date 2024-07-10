#include<iostream>
using namespace std;


int LinearSearch(int *array,int key,int n){

for(int i=0;i<n;i++){
    if(array[i]==key){
    return i;
    }
}
return -1;
}

int main()
{
   int n;
   cout<<"enter the length of array ";
   cin>>n;
    
   int arr[n];
   cout<<"enter elements of array ";
   for(int i=0;i<n;i++){
   cin>>arr[i];
    }
  
    int p;
    cout<<"enter the number tobe searched ";
    cin>>p;

    cout<<"the index of the given number is "<<LinearSearch(arr,n,p);

    return 0;
}



/*

!##TIME COMPLEXITY
-> relation between input size(array size) and no of opreations
?-> size of array is direcly related with no of operations
=>the graph between no of operations and array size is straight line
such time complexity is called linear time complexity and is represented
by O(n)

!##SPACE COMPLEXITY
->relation between input size(array size) and extra space(extra variables,array etc..)







*/