#include <iostream>
#include <utility>
using namespace std;

pair<int,int> linearsearch(int matrix[][4],int n,int m,int key){
// time complexity O(n^2)
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(matrix[i][j]==key){
      return {i,j};  
    }
  }
}

return{-1,-1};

}


int main(){
int matrix[4][4]={{1,2,3,4},{3,4,5,6},{7,8,9,10},{11,12,13,14}};

pair<int,int> result = linearsearch(matrix,4,4,13);

if(result.first!=-1 && result.second!=-1){
cout<<"i = "<<result.first<<" and "<<"j = "<<result.second<<endl;
}else{
  cout<<"the key is not in the array"; 
}


  return 0;
}