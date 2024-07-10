#include<iostream>
using namespace std;

int BinarySearch(int *arr,int n,int key){
int st=0,end=n-1;
int mid=(st+end)/2;
while(st<=n){
if(arr[mid]==key){
  return arr[mid];
}
else if(arr[mid]<key){
    st=mid+1;
    if(arr[mid]==key){
        return arr[mid];
    }
}else{
    end=arr[mid]-1;
    if(arr[mid]==key){
        return arr[mid];
    }
}

}
return -1;

}



int main()
{
     
 int n;
    cout<<"Enter the length of Array ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements "<<endl;
    
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<BinarySearch(arr,n,12);
    

    return 0;
}