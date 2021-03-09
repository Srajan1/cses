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
 
 
 
int main() {
  ll n, target;
  cin >> n >> target;
  vector<ll> x(n);
  for (ll&v : x) cin >> v;
 
  vector<vector<ll>> dp(n+1,vector<ll>(target+1,0));
  dp[0][0] = 1;
  loopf(i, 1, n) {
    loop(j, target+1) {
      dp[i][j] = dp[i-1][j];
      ll left = j-x[i-1];
      if (left >= 0) {
	(dp[i][j] += dp[i][left]) %= mod;
      }
    }
  }
  cout << dp[n][target] << endl;
}