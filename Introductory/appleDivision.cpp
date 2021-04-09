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
#define p(x,y) pair<x, y>

int main()
{
    ll n, total=0, ans=INT_MAX;
    cin >> n;
    ll arr[n];
    loop(i, n) {
        cin >> arr[i];
        total += arr[i];
    }
    loop(i, 1<<n) {
        ll s = 0;
        loop(j, n) {
            if(i & 1<<j) s += arr[j];
        }
        ll curr = abs((total-s)-s);
        ans = min(ans, curr);
    }
    cout << ans;
    return 0;
}