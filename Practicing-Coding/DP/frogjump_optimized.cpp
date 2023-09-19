#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int n,fs,ss ;
    cin >> n ;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    int curi,prev,prev2;
    prev=0;
    prev2=0;
    
    for(int i=1;i<n;i++){
        fs =prev+abs(heights[i]-heights[i-1]);
        ss = INT_MAX ;
        if(i>1) ss = prev2+abs(heights[i]-heights[i-2]);
        curi=min(fs,ss);
        prev2=prev;
        prev=curi;        
    }
   cout << prev;
   return 0 ;
   }