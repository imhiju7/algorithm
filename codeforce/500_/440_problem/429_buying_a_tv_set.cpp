#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,b,x,y,g;
	cin>>a>>b>>x>>y;
	g=__gcd(x,y);
	x/=g;
	y/=g;
	cout<<min(a/x,b/y);
}
//1041B