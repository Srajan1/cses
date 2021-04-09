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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    map<int, int> vals;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if(vals.count(x - a[i])){
            cout << i + 1 << " " << vals[x - a[i]] << "\n";
            return 0;
        }
        vals[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << '\n';
}