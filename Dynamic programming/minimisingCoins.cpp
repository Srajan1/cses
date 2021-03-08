#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i, n) for (ll i = 0; i < n; ++i)
#define loopf(i, k, n) for (ll i = k; i <= n; ++i)
#define loopr(i, k, n) for (ll i = k; i >= n; --i)
#define test(cases) \
    ll cases;       \
    input(cases);   \
    while (cases--)
#define print(a) printf("%lld\n", a)
#define input(a) scanf("%lld", &a)
#define inarr(a, n)            \
    for (ll i = 0; i < n; ++i) \
    scanf("%lld", &a[i])
#define assign(arr, x, n) loop(i, n) arr[i] = x
#define v(x) vector<x>
int main()
{
    ll n, k;
    cin>>n>>k;
    v(ll) coins(n);
    v(ll) dp(1000001, INT_MAX);
    dp[0] = 0;
    loop(i, n){
        cin>>coins[i];
        dp[coins[i]] = 1;
    }
    loopf(i, 1, k){
        for(auto coin: coins){
            
            if(i-coin >= 0)
            dp[i] = min(1+dp[i-coin], dp[i]);
        }
    }
    if(dp[k] != INT_MAX)
    cout<<dp[k];
    else cout<<-1;
}