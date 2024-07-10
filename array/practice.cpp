#include <iostream>
using namespace std;

void shufflearray(int *arr,int n){

n=2*n;

for(int i=1;i<n-2;i++){

  swap(arr[i],arr[i+n/2-1]);
     
}

for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}




int main(){

 int arr[]={2,5,1,3,4,7};
 int n=3;

shufflearray(arr,n);

  return 0;
}