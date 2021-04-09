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

bool flag = true;

bool bipar(v(ll) graph[], v(bool) &visited, v(ll) &teams, ll source, ll team){
    visited[source] = true;
    teams[source] = team;
    for(auto node: graph[source]){
        if(!visited[node]){
            if(bipar(graph, visited, teams, node, team^1) == false)
            return false;
        }else {
            if(teams[node] == teams[source])
            return false;
        }
    }
    return true;
}

int main()
{
    ll n, m;
    cin>>n>>m;
    v(ll) graph[n];
    loop(i, m){
        ll a, b;
        cin>>a>>b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    v(ll) teams(n);
    v(bool) visited(n, false);
    bool ans = true;
    loop(i, n)
    if(!visited[i]){
        ans = ans&bipar(graph, visited, teams, i, 0);
    }
    if(!ans)
    cout<<"IMPOSSIBLE";
    else for(auto team: teams)
    cout<<team+1<<" ";
    
}