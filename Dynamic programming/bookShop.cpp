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
    int n, x;
    cin>>n>>x;
    v(int) price(n);
    v(int) val(n);
    loop(i, n)
    cin>>price[i];
    loop(i, n)
    cin>>val[i];
    v(v(int)) dp(n+1, v(int)(x+1, 0));
    loopf(i, 1, n){
        loopf(j, 1, x){
            if(j >= price[i-1])
            dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-price[i-1]] );
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][x];
}