#include <bits/stdc++.h>
using namespace std;
long long i,n,m; string a;
int main(){
    cin>>n;
    while(n--){
        cin>>m>>a;
        for(i=0;i<m;i++)
        if(abs(a[i]-a[m-i-1])!=2&&a[i]-a[m-i-1]!=0){
            cout<<"NO"<<endl; break;
        }
        if(i==m) cout<<"YES"<<endl;
    }
    return 0;
}
//1027A