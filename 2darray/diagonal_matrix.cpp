#include <iostream>
using namespace std;


int diagonalsum(int matrix[][4],int n,int m){
int sum1=0;
int sum2=0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(i==j){
           sum1+=matrix[i][j];
        }
        else if(i+j==n-1){
           sum2+=matrix[i][j];
        }
       
    }
}

return (sum1+sum2) ;

}



int main(){

int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
cout<<diagonalsum(matrix,4,4);

  return 0;
}