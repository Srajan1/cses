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
    cin>>n;
    if(n == 2 || n == 3){
        cout<<"NO SOLUTION";
    }
    else if(n == 1)
    cout<<1;
    else {
        ll p1 = 1, p2 = n/2+1;
        while(p2 < n){
            cout<<p2<<" "<<p1<<" ";
            ++p2;
            ++p1;
        }
        cout<<n;
        if(n%2 == 0)
        cout<<" "<<n/2;
    }
}