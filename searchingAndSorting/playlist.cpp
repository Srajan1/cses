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
    ll n;
    cin>>n;
    v(ll) arr(n);
    inarr(arr, n);
    ll i = 0, j = 1, ans = 1;
    map<ll, ll> m;
    m[arr[0]]++;
    while(j<n){
        if(m[arr[j]] == 0){
            ans = max(ans, j-i+1);
            m[arr[j]]++;
            ++j;
        }else{
            m[arr[i]]--;
            ++i;
        }
    }
    cout<<ans;
}