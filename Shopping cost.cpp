#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  
  int n;  cin>>n;
  while(n--){
     float q,p,r,m;
     cin>>q>>p;
     if(q>100){
       r=p*q*0.2;
       m=q*p-r;
       cout<<fixed<<setprecision(1)<<m<<endl;
     }else{
       cout<<fixed<<setprecision(1)<<q*p<<endl;
     }
  }
}
