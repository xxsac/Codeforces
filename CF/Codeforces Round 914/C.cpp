#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e3 + 9;
ll a[N];

void solve(){
    ll n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    if(k >= 3){
        cout << 0 << '\n';
        return;
    }
    sort(a + 1, a + 1 + n);
    if(k == 2){
        ll ans = a[1];
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j < i; ++j){
                ll x = a[i] - a[j];
                ans = min(ans, x);
                int y = lower_bound(a + 1, a + 1 + n, x) - a;
                ans = min(ans, min(a[y] - x, x - a[y - 1]));
            }
        }
        cout << ans << '\n';
    }
    if(k == 1){
        ll mi = a[1];
        for(int i = 2; i <= n; ++i){
            mi = min(mi, a[i] - a[i - 1]);
        }
        cout << mi << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
