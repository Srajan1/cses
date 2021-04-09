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

void recur(v(string) &ans, string s, ll index){
    if(index == s.size()-1) {ans.push_back(s); return;}
    loopf(i, index, s.size()-1){
        swap(s[i], s[index]);
        recur(ans, s, index+1);
        swap(s[i], s[index]);
    }
}

int main(){
    string s;
    cin>>s;
    if(s.size() == 1)
    cout<<s;
    else {
        v(string) ans;
        recur(ans, s, 0);
        set<string> st;
        for(auto str: ans) st.insert(str);
        cout<<st.size()<<endl;
        for(auto str: st)
        cout<<str<<endl;
    }
}