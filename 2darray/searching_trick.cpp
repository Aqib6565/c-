#include <iostream>
#include <utility>
using namespace std;

pair<int , int> newsearch(int mat[][4],int n,int m,int key){
int start=0;
int end=n*m-1;
while(start<=end){
int mid = (start+end)*0.5;
int row = mid/m;
int col = mid%m;

 if(mat[row][col]==key){
         return {row,col};
    }
    else if(mat[row][col]>key){
        end=mid-1;
    }else{
        start=mid+1;
    }
}

}


int main(){
int matrix[4][4]={{1,2,3,4},{3,4,5,6},{7,8,9,10},{11,12,13,14}};

pair<int,int> result = newsearch(matrix,4,4,13);

if(result.first!=-1 && result.second!=-1){
cout<<"i = "<<result.first<<" and "<<"j = "<<result.second<<endl;
}else{
  cout<<"the key is not in the array"; 
}


  return 0;
}