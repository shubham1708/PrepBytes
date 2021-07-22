#include <bits/stdc++.h>
using namespace std;

int main()
{
  int d,c,m;  cin>>d>>c>>m;
  int p,s,k;   cin>>p>>s>>k;
  int n;  cin>>n;
  
  int animal=d+c+m;
  int bird=p+s+k;
  int breq=0,areq=0;
  if(bird%10>0){
    breq=bird/10+1;
  }else{
    breq=bird/10;
  }
  int rem=n-breq;
  if(animal<=rem*5){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
  
}
