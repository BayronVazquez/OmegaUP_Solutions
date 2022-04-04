#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi  acos(-1)
#define pb  push_back
#define F   first
#define S   second
#define forr(i,a,b)     for(ll i = (ll)a, aux = (ll)b ; i < aux; ++i)
#define fore(i,a,b)     for(ll i = (ll)a, aux = (ll)b ; i >= aux; --i)
#define fori(i,a,b,c)   for(ll i = (ll)a, aux = (ll)b, inc = (ll) c; i < aux; i+=inc)
#define sz(x)           (ll)x.size()
#define all(a)          a.begin(),a.end()
#define rall(a)         a.rbegin(),a.rend()
#define b_p(n)          __builtin_popcountll(n)

using namespace std;

typedef long long ll;
typedef pair<ll,ll>  pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

char x;
string s;
long long cnt;

int main(){
    cin>>x>>s;
    cnt = 0;
    forr(i,0,sz(s))
        if(s[i]==x)cnt++;
    cout<<cnt<<"\n";
    return 0;
}
// put suffix  LL or ULL for constants integers, 1.0f float, 1.0 double, 1.0L long double
// read the question correctly (is y a vowel? what are the exact constraints?)
// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?) ARRAY OUT OF BOUNDS