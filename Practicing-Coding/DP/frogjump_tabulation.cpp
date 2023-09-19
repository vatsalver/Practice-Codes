#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int n,fs,ss ;
    cin >> n ;
    vector<int> heights(n),dp(n,-1);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    dp[0]=0;
    for(int i=1;i<n;i++){
        fs =dp[i-1]+abs(heights[i]-heights[i-1]);
        ss = INT_MAX ;
        if(i>1) ss = dp[i-2]+abs(heights[i]-heights[i-2]);
        dp[i]=min(fs,ss);
    }
   cout << dp[n-1];
   return 0 ;
   }