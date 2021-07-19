#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  
  int t; cin>>t;
    while(t--){
      int n,p=0;  cin>>n;
      for(int i=1;i<n;i++){
        if(n%i==0){
          p+=i;
        }
      }
      if(p==n){
        cout<<"true"<<endl;
      }else{
        cout<<"false"<<endl;
      }
    }
}
