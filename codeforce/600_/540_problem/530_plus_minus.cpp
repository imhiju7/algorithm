#include <bits/stdc++.h>
using namespace std;
long long t, n, x, y, a, b, c;
 
int main() {
 for (cin>>t; t-- and cin>>n>>x>>y;) {
  c=n/lcm(x,y); a=n-n/x+c; b=n/y-c;
  cout<<(n*(n+1)-a*(a+1)-b*(b+1))/2<<'\n';
 }
} 
//1872D