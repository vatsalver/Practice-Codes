#include<iostream>
#include<vector>
using namespace std ;
int jump(int n,vector<int> &heights,vector<int> &dp){
 int left,right;
 if(n==0) return 0;
 if(dp[n]!=-1) return dp[n];
 left =jump(n-1, heights,dp)+abs(heights[n]-heights[n-1]);
 right = INT_MAX ;
 if(n>1) right = jump(n-2, heights ,dp)+abs(heights[n]-heights[n-2]);
 return dp[n]=min(left,right);
}
int main(){
    int n ;
    cin >> n ;
    vector<int> heights(n),dp(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
   cout << jump(n-1,heights,dp);

   return 0 ;
   }