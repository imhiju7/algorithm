#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,t; cin >> t;
while(cin>>n){
for(i=0;i<n/2;++i)cout<<2*n-2*i<<' '<<2*i+2<<' ';cout<<endl;
for(i=0;i<n/2;++i)cout<<2*i+1<<' '<<n+2*i+1<<' ';cout<<endl;
}
}
//1816B