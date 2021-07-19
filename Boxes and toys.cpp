#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  
  int n;  cin>>n;
  int t[n],c[n],b=0;
  for(int i=0;i<n;i++){
    cin>>t[i];
    cin>>c[i];
    if(c[i]-t[i]>=2){
      b++;
    }
  }
  cout<<b<<endl;
}
