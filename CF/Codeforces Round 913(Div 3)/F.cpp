#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N], sum1[N], sum2[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i], a[i + n] = a[i];

    for(int i = 2;i <= 2 * n;++i) sum1[i] = sum1[i - 1] + (a[i] >= a[i - 1]);
    for(int i = 2;i <= 2 * n;++i) sum2[i] = sum2[i - 1] + (a[i] <= a[i - 1]);

    ll ans = 1e9;
    for(ll i = 2 * n; i >= n;--i) {
        if(sum1[i] - sum1[i - n + 1] == n - 1) ans = min(ans, min(2 * n - i,i - n + 2));
        if(sum2[i] - sum2[i - n + 1] == n - 1) ans = min(ans, min(2 * n - i + 1,i - n + 1));
    }

    ans = (ans == 1e9 ? -1 : ans);
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}

