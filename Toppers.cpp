#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;  cin>>t;
  while(t--){
    int a,b,c,n;  cin>>a>>b>>c>>n;
    cout<<a<<" "<<b<<" "<<c<<" ";
    n-=3;
    while(n--){
      int d=a+b+c;
      cout<<d<<" ";
      a=b,b=c,c=d;
      
    }
    cout<<endl;
  }
}
