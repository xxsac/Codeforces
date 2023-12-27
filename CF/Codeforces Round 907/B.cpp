#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;

ll a[N], x[N];

void solve(){
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= q; ++i) cin >> x[i];
    ll pre = 35;
    ll t;
    for(int i = 1; i <= q; ++i){
        if(x[i] >= pre) continue;
        pre = min(pre, x[i]);
        t = (1ll << pre);
        for(int j = 1; j <= n; ++j){
            if(a[j] % t == 0) a[j] += t / 2ll;
            else continue;
        }
    }

    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    cout << "\n";
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}