#include<stdio.h>
int main(){
	long long n,x,s,o;int t,q,a,i;
	for(scanf("%d",&t);t;--t){
		for(scanf("%lld%d",&n,&q),s=o=i=0;i<n;++i)scanf("%d",&a),s+=a,o+=a%2;
		while(q--)scanf("%d%lld",&a,&x),s+=x*(a?o:n-o),o=x%2?a?0:n:o,printf("%lld\n",s);
	}
}
//1744B