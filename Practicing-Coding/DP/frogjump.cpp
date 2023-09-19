#include<iostream>
#include<vector>
using namespace std ;
int jump(int n,vector<int> &heights){
 int left,right;
 if(n==0) return 0;
 left =jump(n-1, heights)+abs(heights[n]-heights[n-1]);
 right = INT_MAX ;
 if(n>1) right = jump(n-2, heights)+abs(heights[n]-heights[n-2]);
 return min(left,right);
}
int main(){
    int n ;
    cin >> n ;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
   cout << jump(n-1,heights);
   return 0 ;
}