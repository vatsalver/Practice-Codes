#include<iostream>
using namespace std ;
int main(){
    int n,curi,prev,prev2;
    cin >> n;
    prev2=0;
    prev=1;
    for(int i =2 ;i<=n;i++){
        curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout << prev;
    return 0;
}