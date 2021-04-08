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
 
ll bfs(v(bool) &visited, v(ll) graph[], v(ll) dist, ll n, v(ll) &parent){
    queue<ll> q;
    q.push(0);
    
    while (!q.empty()){
        ll front = q.front();
        q.pop();
        
        visited[front] = true;
        for(auto node: graph[front]){
            if(!visited[node]){
                visited[node] = true;
                parent[node] = front;
                dist[node] = dist[front]+1;
                q.push(node);
            }
        }
    }
    return dist[n-1];
}
 
int main()
{
    ll n, m;
    cin>>n>>m;
    v(ll) parent(n, -1);
    v(ll) graph[n];
    loop(i, m){
        ll a, b;
        cin>>a>>b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    v(bool) visited(n, false);
    v(ll) dist(n, INT_MAX);
    dist[0] = 1;
    ll cnt = bfs(visited, graph, dist, n, parent);
    if(!visited[n-1]) cout<<"IMPOSSIBLE";
    else {
        cout<<cnt<<endl;
        ll val = n-1;
        v(ll) ans;
        while(1){
            ans.push_back(1+val);
            if(val == 0)
            break;
            val = parent[val];
        }
        loopr(i, ans.size()-1, 0)
        cout<<ans[i]<<" ";
    }
}