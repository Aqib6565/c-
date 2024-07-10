#include <iostream>
#include <utility>
using namespace std;

pair<int,int> binarysearch(int matrix[][4],int n,int m,int key){
int start=0;
int end=n-1;
while(start<=end){
int mid = (start+end)*0.5;
for(int i=0;i<n;i++){
    if(matrix[i][mid]==key){
         return {i,mid};
    }
    else if(matrix[i][mid]>key){
        end=mid-1;
    }else{
        start=mid+1;
    }
    
}
}

return{-1,-1};
  
}


int main(){
int matrix[4][4]={{1,2,3,4},{3,4,5,6},{7,8,9,10},{11,12,13,14}};

pair<int,int> result = binarysearch(matrix,4,4,13);

if(result.first!=-1 && result.second!=-1){
cout<<"i = "<<result.first<<" and "<<"j = "<<result.second<<endl;
}else{
  cout<<"the key is not in the array"; 
}


  return 0;
}