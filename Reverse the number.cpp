#include <bits/stdc++.h>
using namespace std;



int main()
{
  //write your code here
  long long int x;  cin>>x;
  long long int rev=0,rem;
  while(x!=0){
  rem=x%10;
  rev=rev*10+rem;
  x/=10;
  }
  cout<<rev<<endl;
  
}
