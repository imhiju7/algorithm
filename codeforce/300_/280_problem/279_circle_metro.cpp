# include <iostream>
using namespace std;
int n,a,x,b,y;
int main()
{
	cin>>n>>a>>x>>b>>y;
	while(a!=x&&b!=y){
		a++;if(a==n+1)a=1;
		b--;if(b==0)b=n;
		if(a==b)return cout<<"YES",0;
	}return cout<<"NO",0;
}
//1169A