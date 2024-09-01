#include <bits/stdc++.h>
/*
#include <fstream>
#include <vector>
#include <algorithm>
*/
//syntax
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define br break;
#define ctn continue;
#define re0 return 0;
#define el '\n'
// constants
#define INF 1e9
#define DINT -1e9
#define MOD 1e9+7
// data types
#define db double
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define sll set<ll>
#define us_ll unordered_set<ll>
#define mll multiset<ll>
#define qll queue<ll>
#define lis_ll list<ll>
#define st_ll stack<ll>
#define pq_ll priority_queue<ll>
#define dq_ll deque<ll>
#define pll pair<ll, ll>
#define mp_ll map<ll, ll>
#define um_ll unordered_map<ll, ll>
#define ss_pll set<pll>
#define ms_pll multiset<pll>
// macros
#define fi first
#define se second
#define fr front
#define re rear
#define bk back
#define bg begin
#define rbg rbegin
#define ed end
#define red rend
// functions
#define rsz resize
#define emp empty
#define pob pop_back
#define pof pop_front
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
// vector functions
#define set_f(a) fixed << setprecision(a)
#define sz(x) x.size()
#define sz_str(s) s.length()
#define mx_ele(x) *max_element(all(x))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
// loops
#define for_i(i, a, b) for (ll i = a; i <= b; i++)
#define for_d(i, a, b) for (ll i = a; i >= b; i--)
#define whl(t) while(t--)
// input
#define in_n(n) cin >> n;
#define in_ab(a, b) cin >> a >> b;
#define ms(a, x) memset(a, x, sizeof(a));
#define ina_n(a, n) for_i(i, 0, n-1) cin >> a[i];
#define ina_nm(a, n, m) for_i(i, 0, n-1) for_i(j, 0, m-1) cin >> a[i][j];
// output
#define oel cout << el;
#define out_n(n) cout << n;
#define out_ab(a, b) cout << a << ' ' << b;
#define output_i(a, x, n) for_i(i, x, n-1) cout << a[i] << ' ';
#define output_d(a, x, n) for_d(i, x, n-1) cout << a[i] << ' ';
#define output_n(a, n, m) for_i(i, 0, n-1) {output(a[i], m); cout << el;}
/* ------------------ problem ------------------
Tèo vừa được công ty khen thưởng với n phần quà được đánh số từ 1 đến n. 
Tèo có quyền chọn bất kỳ phần quà nào nhưng với điều kiện các phần quà phải liên tiếp nhau và có độ dài
không được vượt quá b và không được ngắn hơn a, với  a,b là các số nguyên cho trước.
Input:
- Dòng đầu tiên chứa ba số nguyên n, a và b. ( 1 <= a <= b <= n <= 2.10^5)
- Dòng thứ hai chứa n số nguyên xi đại diện cho giá trị các phần quà ( |xi| <= 10^9)

Ouput:
In ra một số nguyên là phần quà lớn nhất mà Tèo nhận được.
*/ 
/* ----------------- test case -----------------
Input
8 1 2
-1 3 -2 5 3 -5 2 2
Output
8
*/
using namespace std;
/*
ifstream cin("GARBOT.INP");
ofstream cout("GARBOT.OUT");
*/
#define maxN 200005 //10^5
// init variables
ll n, u, v, MAX=LLONG_MIN;
ll a[maxN], st[maxN<<2];
// function
void build(ll id, ll l, ll r){
    if(l==r) return st[id]=a[l],void();
    ll m=(l+r)>>1;
    build(id<<1,l,m);
    build(id<<1|1,m+1,r);
    st[id]=min(st[id<<1],st[id<<1|1]);
}
ll get(ll id, ll l, ll r, ll u, ll v){
    if(v<l || u>r) return LLONG_MAX;
    if(u<=l && r<=v) return st[id];
    ll m=(l+r)>>1;
    return min(get(id<<1,l,m,u,v),get(id<<1|1,m+1,r,u,v));
}
// solve
void solve(){
    // name variables
    in_n(n) in_ab(u, v)
    a[1]=0;
    n++;
    for_i(i, 2, n) cin >> a[i], a[i]+=a[i-1];
    build(1,1,n);
    for_i(i, u+1, n){
        ll x=get(1,1,n,i-v,i-u);
        MAX=max(MAX,a[i]-x);
    }
    out_n(MAX)
}
// main
int main() {
    fast
    /*
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    */
    solve();
    re0;
}
/*
code by: Hiju7 (full name: Hieu Nguyen Tan)
date of create: 
tag: 

contact me if you have any questions or issues with this code
contact: 
    instagram: @imhiju7
    fb: https://facebook.com/imhiju7
    github: imhiju7
Thank you for reading this code. have a nice day :D
*/