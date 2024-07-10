#include<iostream>
using namespace std;

int watertrapping(int *heights,int n){
int leftmax[20000];
int rightmax[20000];

leftmax[0] = heights[0];
rightmax[n-1] = heights[n-1];
 
for(int i=1;i<n;i++){
leftmax[i]=max(leftmax[i-1],heights[i-1]);
}

for(int i=n-2;i>=0;i--){
rightmax[i]=max(rightmax[i+1],heights[i-1]);
}

int watertrapped = 0;

for(int i=0;i<n;i++){
int currwater = min(leftmax[i],rightmax[i])-heights[i];
if (currwater>0){
watertrapped +=currwater;
}
}

return watertrapped;
}


int main()
{
    int heights[]={0,1,0,2,6,0,3};
    int n=7;

   cout<<watertrapping(heights,n);

    return 0;
}