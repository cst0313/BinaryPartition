#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  //long long is a data type in C++ language that can hold larger numbers than int, so we'll use it
  ll n;
  cin>>n;//input the n we want to find the answer for
  ll f[n+1];//we declare an array. f[0] is equal to f(0) and so on
  memset(f,0,sizeof(f));//we set each member to zero with this function
  f[1]=1;//f(1)=1
  for(ll i=2;i<=n;i++){//for each n
    for(ll j=1;j<=floor((double)i/2);j++){//we perform the summation
      f[i]+=f[j];
    }
    f[i]=f[i]+1;//add one as in the equation
  }
  cout<<f[n]<<endl;//output our answer
  return 0;
}
