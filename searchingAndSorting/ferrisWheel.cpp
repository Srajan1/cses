#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i, n) for(ll i = 0;i<n;++i)
#define test(cases) ll cases; input(cases); while(cases--)
#define input(a) scanf("%lld", &a)
#define inarr(a, n) for(ll i = 0;i<n;++i)scanf("%lld", &a[i])
 
 
 
int main()
{
    ll n, m;
    cin>>n>>m;
    ll arr[n];
    loop(i, n){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll cnt = 0, i = 0, j = n-1;
    while(j >= i){
        if(arr[i]+arr[j] <= m){
            ++i;
            --j;
        }else{
            --j;
        }
        ++cnt;
    }
    cout<<cnt;
}