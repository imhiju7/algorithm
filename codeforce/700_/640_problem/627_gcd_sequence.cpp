#include<bits/stdc++.h>
using namespace std;
int check(vector<int> a){
	for(int i=0;i<a.size()-2;i++){
		if(__gcd(a[i],a[i+1])>__gcd(a[i+1],a[i+2])){
			return i+1;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++){
			cin>>x;
			a.push_back(x);
		}
		if(check(a)==-1){
			cout<<"YES"<<endl;
			continue;
		}
		bool f=0;
		for(int i=check(a)-1;i<=check(a)+1;i++){
			
				b=a;
				b.erase(b.begin()+i);
				if(check(b)==-1) f=1;
			
		}
		if(f){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
//1980D