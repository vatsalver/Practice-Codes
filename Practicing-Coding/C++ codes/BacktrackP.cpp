#include<iostream>
using namespace std;
long long N21(long long i,long long n){
  if (i>n)
  {
   return 0;
  }
  N21(i+1,n);
  cout<<i<<'\n';
  return 0;
}
int main(int argc, char const *argv[])
{
    N21(1,19000);
    return 0;
}

