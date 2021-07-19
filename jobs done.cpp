#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  
  int t;  cin>>t;
  while(t--){
    int d,m,y,j=0;  cin>>d>>m>>y;
    for(int i=1;i<m;i++){
      if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
        j+=31;
      }if(i==4 || i==6 || i==9 || i==11){
        j+=30;
      }
      if(i==2){
        if(y%4==0){
          if(y%100==0){
            if(y%400==0){
              j+=29;
            }else{
              j+=28;
            }
          }else{
            j+=29;
          }
        }else{
          j+=28;
        }
      }
    }
    j+=d;
    cout<<j<<endl;
  }
}
