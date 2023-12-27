#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll p = 1e9 + 7;

void solve(){

    ll l, r; cin >> l >> r;
    ll ans = 0;
    for (int i = 2; (1ll << i) <= r; ++ i) {
			if ((1ll << (i + 1)) - 1 < l) continue;
			ll nl = max(l, 1ll << i), nr = min(r, (1ll << (i + 1)) - 1), res = i;
			while (res <= nr) {
				ans = (ans + nr - max(res, nl) + 1) % p;
				if (res * i < res) break;
				res *= i;
			}
	}
    cout << ans << '\n';
    
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}




