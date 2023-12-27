#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N], b[N];

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    sort(a + 1, a + 1 + n);
    
    ll x = 0ll;
    for(int i = 1; i < n; ++i){
        x = gcd(x, a[i + 1] - a[i]);
    }
    
    ll ans = 0ll;
    for(int i = 1; i <= n; ++i){
        ans += (abs(a[n] - a[i]) / x);
    }

    ll cur = a[n] - x;
    ll add = 1;
    for(int i = n - 1; i >= 1; --i){
        if(cur != a[i]) break;
        cur -= x; ++add;
    }
    cout << ans + add << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
