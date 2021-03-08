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
int main()
{
    ll n;
    input(n);
    ll arr[n];
    inarr(arr, n);
    ll ans = 0;
    loopf(i, 1, n-1){
        if(arr[i] < arr[i-1]){
            ans += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<ans;
}