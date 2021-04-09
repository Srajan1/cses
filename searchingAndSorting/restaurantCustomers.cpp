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
 
int main()
{
    ll n;
    cin>>n;
    vector< pair<ll, bool> > vec;
    loop(i, n){
        ll a, b;
        cin>>a>>b;
        vec.push_back(make_pair(a, true));
        vec.push_back(make_pair(b, false));
    }
    sort(vec.begin(), vec.end());
    ll ans = 0, maxs = 0;
    // loop(i, 2*n){
    //     if(vec[i].second){
    //         cout<<vec[i].first<<" incoming\n";
    //     }
    //     else 
    //         cout<<vec[i].first<<" outgoing\n";
    // }
    loop(i, 2*n){
        if(vec[i].second)
            ++ans;
        else
            --ans;
        maxs = max(maxs, ans);
        
    }
    cout<<maxs;
}