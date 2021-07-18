#include <bits/stdc++.h>
using namespace std;

void solve(long long n){
  while(n!=1){
       if(n%2==0){
        n=floor(sqrt(n));
       
       }else{
         n=floor(sqrt(n)*sqrt(n)*sqrt(n));
         
       }
       cout<<n<<" ";
     }
}

int main()
{

   long long  t;  cin>>t;
   while(t--){
     long long n;  cin>>n;
     
     cout<<n<<" ";
     solve(n);
     cout<<endl;
   }
}
