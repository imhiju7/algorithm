#include <iostream>
int main(){
    int t;std::cin>>t;
    while(t--){
        int a,b;std::cin>>a>>b;
        std::cout<<((a%2==0&&2*b!=a)||(b%2==0&&2*a!=b)?"YES\n":"NO\n");
    }
}
//1928A