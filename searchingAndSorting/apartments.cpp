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
    ll n, m, k;
    input(n);
    input(m);
    input(k);
    ll arr[n], brr[m];
    loop(i, n){
        cin>>arr[i];
    }    
    loop(i, m){
        cin>>brr[i];
    }
    sort(arr, arr+n);
    sort(brr, brr+m);
    ll i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(abs(arr[i]-brr[j]) <= k){
            ++i;
            ++j;
            ++cnt;
        }else{ 
            if(brr[j] > arr[i]){
                ++i;
            }else{
                ++j;
            }
        }
    }
    cout<<cnt;
}