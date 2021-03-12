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

ll getMax(ll n){
    ll maxs = 0;
    while(n > 0){
        maxs = n%10;
        n/=10;
    }
    return maxs;
}

int main()
{
    ll n;
    cin>>n;
    v(ll) dp(n+1, INT_MAX);
    ll nine = 9;
    loopf(i, 1, min(n, nine)){
        dp[i] = 1;
    }
    loopf(i, 10, n){
        ll mins = INT_MAX;
        ll x = i;
        while(x > 0){
            mins = min(mins, dp[i-x%10]+1);
            x/=10;
        }
        dp[i] = mins;
    }
    cout<<dp[n];
}