#include <bits/stdc++.h>
using namespace std;
 
//output function 
void output(stack<int>s){
  cout<<"[";
  while(s.size()!=1){
    cout<<s.top()<<", ";
    s.pop();
  }
  cout<<s.top()<<"]"<<endl;
}
int main(){
  //Warning: this code is not very quick
  cout<<"Enter the number you want to find out the answer of: ";
  int n;
  cin>>n;
  cout<<endl;
  queue<stack<int>>q;
  stack<int>temp;
  temp.push(n);
  q.push(temp);
  int counter=0;
  while(q.size()!=0){
    temp=q.front();
    if(temp.top()==1){
      output(temp);
      q.pop();
      counter++;
      continue;
    }
    int first=temp.top();
    for(int i=1;i<=floor((double)first/2);i++){
      temp.push(i);
      q.push(temp);
      temp.pop();
    }
    counter++;
    output(temp);
    q.pop();
  }
  cout<<"Final number of members: "<<counter;
  return 0;
}
