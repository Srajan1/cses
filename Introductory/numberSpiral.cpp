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
    test(cases){
        ll r, c;
        cin >> r;
        cin >> c;
        ll ans = 0;
        ll z = max(r, c);
        ll z2 = (z - 1) * (z - 1);
        if (z % 2 == 0)
            if (z == c)
                ans = z2 + r;
            else
                ans = z2 + 2 * z - c;
        else 
            if (r == z)
                ans = z2 + c;
            else
                ans = z2 + 2 * z - r;
        cout << ans << endl;
    }
}