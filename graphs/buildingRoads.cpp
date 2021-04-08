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
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;

void bfs(map<ll, v(ll)> graph, v(bool) &visited, ll source){
    queue<ll> q;
    q.push(source);
    while(!q.empty()){
        ll front = q.front();
        visited[front] = true;
        q.pop();
        for(auto node: graph[front]){
            if(!visited[node])
            q.push(node);
        }

    }
}

int main()
{
    fast
    ll n, m;
    cin>>n>>m;
    map<ll, v(ll)> graph;
    loop(i, m){
        ll a, b;
        cin>>a>>b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    v(bool) visited(n, false);
    ll cnt = 0;
    v(ll) ans;
    loop(i, n){
        if(!visited[i]){
            bfs(graph, visited, i);
            ++cnt;
            ans.push_back(i);
        }
    }
    cout<<cnt-1<<endl;
    loop(i, ans.size()-1)
        cout<<ans[i]+1<<" "<<ans[i+1]+1<<endl;
}