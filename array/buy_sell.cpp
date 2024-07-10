#include<iostream>
using namespace std;
 
int maxProfit(int *prices,int n){

int bestbuy[100000];
bestbuy[0]=INT32_MAX;
for(int i=1;i<n;i++){
bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
}
 
int maxprofit=0;
for(int i=1;i<n;i++){
int currprofit = prices[i]-bestbuy[i]; 
maxprofit=max(currprofit,maxprofit);
}

return maxprofit;
}


int main()
{
  int n;
    cout<<"Enter the length of Array ";
    cin>>n;
    
    int prices[n];
    
    cout<<"Enter the prices "<<endl;
    for(int i=0;i<n;i++){
    cin>>prices[i];
    }
   
    cout<<"the maximum profit is "<<maxProfit(prices,n);

    return 0;
}