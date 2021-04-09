#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i, n) for(ll i = 0;i<n;++i)
#define loopf(i,k,n) for (ll i = k; i <= n; ++i) 
#define loopr(i,k,n) for (ll i = k; i >= n; --i) 
#define test(cases) ll cases; input(cases); while(cases--)
#define print(a) printf("%lld\n", a)
#define input(a) scanf("%lld", &a)
#define inarr(a, n) for(ll i = 0;i<n;++i)scanf("%lld", &a[i])
 
bool comp(pair<ll, ll> a, pair<ll, ll> b){
    return a.second < b.second;
}
 
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll, ll>> vec;
    loop(i, n){
        ll a, b;
        cin>>a>>b;
        vec.push_back(make_pair(a, b));
    }
    sort(vec.begin(), vec.end(), comp);
    ll lastWatched = vec[0].second, watched = 1;
    loopf(i, 1, n-1){
        if(vec[i].first >= lastWatched){
            lastWatched = vec[i].second;
            ++watched;
        }
    }
    cout<<watched;
}
