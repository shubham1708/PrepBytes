#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
  
  int a=0,b=0;
  while(n>0){
  
    if(n%7==0){
      b++;
      n-=7;
      
    }else if(n%4==0){
      a++;
      n-=4;
      
    }else{
      a++;
      n-=4;
      
    }
  
  }
  if(n<0){
    cout<<-1;
    return;
  
  }
  for(int i=1;i<=a;i++){
    cout<<"4";
  }for(int i=1;i<=b;i++){
    cout<<"7";
  }
  
}
int main(){
  int n;  cin>>n;
  solve(n);
}
