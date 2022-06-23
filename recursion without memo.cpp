#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll f(ll g){
  if(g==1){
    return 1;
  }
  ll answer=0;
  for(ll i=1;i<=floor((double)g/2);i++){
    answer+=f(i);
  }
  return answer+1;
}
 
int main(){
  //long long is a data type in C++ language that can hold larger numbers than int, so we'll use it
  ll n;
  cin>>n;//input the n we want to find the answer for
  cout<<f(n)<<endl;//output our answer
  return 0;
}
