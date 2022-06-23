#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll find_b(ll x){
  ll b[x+1];
  b[1]=2;
  for(ll i=2;i<=x;i++){
    b[i]=b[i-1]+b[i/2];//b_i=b_(i-1)+b_(i/2). note in programming, (2k+1)/2 will be rounded down to k, so this implementation works
  }
  return b[x];
}
 
int main(){
  ll n;
  cin>>n;
  //to put it all together, since w
  if(n==1){
    cout<<1<<endl;
    return 0;
  }
  n/=2;//convert f(x) to the alternate sequence of b
  cout<<find_b(n);
  return 0;
}
