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
  int n, target;
  cin >> n >> target;
  vector<int> c(n);
  for (int&v : c) cin >> v;

  vector<int> dp(target+1,0);
  dp[0] = 1;
  loopf(i, 1, target){
    loop(j, n){
      if (i-c[j] >= 0) {
	(dp[i] += dp[i-c[j]]) %= mod;
      }
    }
  }
  cout << dp[target] << endl;
}