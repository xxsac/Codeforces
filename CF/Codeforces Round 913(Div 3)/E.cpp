#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;


void solve(){
    ll n; cin >> n;
    ll ans = 1ll;
    while(n){
        ll x = n % 10;
        x += 2;
        ans *= x * (x - 1) / 2; //C(x,2)
        n /= 10;
    }
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}

