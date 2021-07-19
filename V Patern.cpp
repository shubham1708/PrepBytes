#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int ch;  cin>>ch;
  int space=8;
  for(int i=1;i<=5;i++){
    
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    for(int k=1;k<=space;k++){
      cout<<"  ";
    }
    for(int l=i;l>0;l--){
      cout<<l;
    }space=space-2;
    
    cout<<endl;
  }
}
