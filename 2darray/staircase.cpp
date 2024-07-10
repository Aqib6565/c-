#include <iostream>
#include <utility>
using namespace std;
// only for sorted matrix..
pair<int, int> staircasesearch(int mat[][4],int n,int m,int key){
int i=0;
int j=m-1;
while(i<n && j>=0){
if(mat[i][j]==key){
    return {i,j};
}
else if(mat[i][j]>key)
   j--;
else{
    i++;
}
}

return{-1,-1};

}



int main(){
int matrix[4][4]={{1,2,3,4},{3,4,5,6},{7,8,9,10},{11,12,13,14}};

pair<int,int> result = staircasesearch(matrix,4,4,13);

if(result.first!=-1 && result.second!=-1){
cout<<"i = "<<result.first<<" and "<<"j = "<<result.second<<endl;
}else{
  cout<<"the key is not in the array"; 
}


  return 0;
}