#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;  cin>>t;
  while(t--){
    float h,m;  cin>>h>>m;
    float digswp=0;  // degree swaped by hour hand when minute hand is on a particular minute point.
    if(h!=0){
      h=h*5;
    }if(m!=0){
       digswp=m*0.5;
      
    }
    h+=digswp/6;
    float ah,am;
    //h=
    //m=6 degree in 1 min
       float minang=(max(h,m)-min(h,m))*6;
       float maxang=360-minang;
       cout<<min(minang,maxang)<<endl;;
  }
}
