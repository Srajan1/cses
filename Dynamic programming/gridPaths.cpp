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
    ll n;
    cin>>n;
    v(string) mat(n);
    loop(i, n)
    cin>>mat[i];
    v(v(ll)) dp(n, v(ll)(n, 0));
    dp[n-1][n-1] = mat[n-1][n-1] == '.' ? 1 : 0;
    loopr(i, n-2, 0){
        if(mat[i][n-1] == '.' && dp[i+1][n-1] == 1)
        dp[i][n-1] = 1;
        if(mat[n-1][i] == '.' && dp[n-1][i+1] == 1)
            dp[n-1][i] = 1;
    }
    loopr(i, n-2, 0){
        loopr(j, n-2, 0){
            if(mat[i][j] == '.')
            dp[i][j] = (dp[i+1][j]%mod + dp[i][j+1]%mod)%mod;
        }
    }
    cout<<dp[0][0];
    // loop(i, n){
    //     loop(j, n)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
}