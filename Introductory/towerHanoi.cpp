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

void hanoi(ll n, ll from, ll aux, ll end){
    if(n == 1)
    cout<<from<<" "<<end<<endl;
    else{
        hanoi(n-1, from, end, aux);
        cout<<from<<" "<<end<<endl;
        hanoi(n - 1, aux, from, end);
    }
}

int main(){
    ll n;
    cin>>n;
    cout<<pow(2, n)-1<<endl;
    hanoi(n, 1, 2, 3);
}