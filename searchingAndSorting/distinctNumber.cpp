#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i, n) for(ll i = 0;i<n;++i)
#define test(cases) ll cases; input(cases); while(cases--)
#define input(a) scanf("%lld", &a)
#define inarr(a, n) for(ll i = 0;i<n;++i)scanf("%lld", &a[i])
 
int main()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll x;
    loop(i, n){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
}