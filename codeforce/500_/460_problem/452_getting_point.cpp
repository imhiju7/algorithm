#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n,m,k,l;cin>>t;
  while(cin>>n>>m>>k>>l){
   int x=(n-1)/7+1;
   int ans=max((m-1)/(k+2*l)+1,(m-l*x-1)/k+1);
   cout<<n-ans<<endl;
  }
}
//1902B