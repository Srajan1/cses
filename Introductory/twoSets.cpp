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
    input(n);
    ll sum = (n*(n+1))/2;
    if(sum%2 || n<3)
        cout<<"NO";
    else{
        v(bool) vis(n+1, false);
        ll cnt = 0;
        if(n%2 == 0){
            for(ll i = 1; i<=n/2; i+=2){
                vis[i] = true;
                vis[n-i+1] = true;
                // cout<<i<<" ";
                cnt+=2;
            }
        }else{
            ll val = sum/2;

            loopr(i, n, 1){
                if(val > i){
                    val -= i;
                    vis[i] = true;
                    ++cnt;
                }else{
                    vis[val] = true;
                    ++cnt;
                    break;
                }
            }
        }
        cout<<"YES\n";
        cout<<cnt<<endl;
        loopf(i, 1, n)
        if(vis[i])
        cout<<i<<" ";
        cout<<endl;
        cout<<n-cnt<<endl;
        loopf(i, 1, n)
        if(!vis[i])
        cout<<i<<" ";
        cout<<endl;
        
    }
}