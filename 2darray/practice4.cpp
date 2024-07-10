#include <iostream>
using namespace std;

void construct2d(int arr[],int n,int m,int l){
int row,col;
int mat[n][m];
if(n*m==l){

for(int i=0;i<l;i++){
    row=i/m;
    col=i%m;
    for(int j=0;j<n;j++){
        mat[row][col]=arr[i];
    }
}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
      cout<<endl;
    }      
}
 else{
    cout<<"[]";
 }
}

int main(){

 int arr[]={1,2,3};
construct2d(arr,1,3,3);

  return 0;
}