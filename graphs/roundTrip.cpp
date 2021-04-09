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
// #define assign(arr, x, n) loop(i, n) arr[i] = x
#define v(x) vector<x>
#define p(x,y) pair<x, y>

v(ll) cycle;
v(v(ll)) graph;
v(bool) visited;
v(ll) parent;
ll cycle_start, cycle_end;

bool dfs(ll source, ll par){
    visited[source] = true;
    for(auto node: graph[source]){
        if(node == par) continue;
        if(visited[node]){
            cycle_end = source;
            cycle_start = node;
            return true;
        }
        parent[node] = source;
        if(dfs(node, parent[node])) return true;

    }
    return false;
}

int main(){
    ll n, m;
    cin>>n>>m;
    graph.resize(n);
    visited.assign(n, false);
    parent.assign(n, -1);
    loop(i, m){
        ll a, b;
        cin>>a>>b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    loop(i, n){
        if(!visited[i] && dfs(i, parent[i]))
            break;
    }
    if(cycle_start == -1)
    cout<<"IMPOSSIBLE";
    else{
        v(ll) cycle;
        cycle.push_back(cycle_start);
        for(ll i = cycle_end; i != cycle_start; i = parent[i]){
            cycle.push_back(i);
        }
        if(cycle.size() < 3) cout<<"IMPOSSIBLE";
        else {
            cout<<cycle.size()+1<<endl;
            for(auto i: cycle)
            cout<<i+1<<" ";
            cout<<cycle[0]+1;
        }
    }
}