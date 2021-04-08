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
        ll a, b;
        cin>>a>>b;
        if(a<b) swap(a, b);
        if(a > 2*b)
        cout<<"NO\n";
        else if((a+b)%3 == 0)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}