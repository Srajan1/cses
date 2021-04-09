#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i, n) for(ll i = 0;i<n;++i)
#define loopf(i,k,n) for (ll i = k; i <= n; ++i) 
#define loopr(i,k,n) for (ll i = k; i >= n; --i) 
#define test(cases) ll cases; input(cases); while(cases--)
#define print(a) printf("%lld\n", a)
#define input(a) scanf("%lld", &a)
#define inarr(a, n) for(ll i = 0;i<n;++i)scanf("%lld", &a[i])
 
int main() {
    ll n;
    cin>>n;
    ll arr[n];
    loop(i, n)
        cin>>arr[i];
    ll sum = INT_MIN, best = INT_MIN;
    loop(i, n){
        sum = max(sum+arr[i], arr[i]);
        best = max(best, sum);
    }
    cout<<best;
}