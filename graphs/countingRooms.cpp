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

ll x[4] = {0, 0, 1, -1};
ll y[4] = {1, -1, 0, 0};

void dfs(v(string) &graph, ll i, ll j, ll n, ll m){
    // cout<<i<<" "<<j<<endl;
    graph[i][j] = '#';
    loop(k, 4){
        if(i+x[k]<n && i+x[k]>=0 && j+y[k]<m && j+y[k]>=0 && graph[i+x[k]][j+y[k]] == '.'){
            
            dfs(graph, i+x[k], j+y[k], n, m);
        }
    }
}

int main(){
    ll n, m;
    cin>>n>>m;
    v(string) graph(n);
    loop(i, n)
    cin>>graph[i];
    ll cnt = 0;
    loop(i, n){
        loop(j, m)
        if(graph[i][j] == '.'){
            // cout<<i<<" "<<j<<endl;
            dfs(graph, i, j, n, m);
            ++cnt;
            // cout<<"\n";
        }

    }
    cout<<cnt;
}