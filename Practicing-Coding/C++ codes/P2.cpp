#include<iostream>
#include<vector>
using namespace std;
void nums(vector <int> a,int b,int c,vector <int> &ds ){
        if (c==b)
        {
         for (auto it:ds)
         {
            cout << it << " ";
         }
        if(ds.size()==0) cout<<"{}";
          cout<<endl;
          return;    
        }
    ds.push_back(a[c]);
    nums(a,b,c+1,ds);
    ds.pop_back();
    nums(a,b,c+1,ds);        
}
int main(){
  vector <int> a;
  vector <int> ds;
  int s;
  cin>>s;
  int k;
  for(int i=0 ;i<s; i++) {
   cin>>k;
   a.push_back(k);   
  }
  nums(a,k,0,ds);
  return 0;
}