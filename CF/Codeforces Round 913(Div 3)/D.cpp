#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll l[N], r[N];
int n;

bool check(ll mid){
    ll x = 0ll, y = 0ll;
    for(int i = 1; i <= n; ++i){
        ll tx = max(x - mid, l[i]), ty = min(y + mid, r[i]);
        if(tx <= ty) x = tx, y = ty;
        else return false;
    }
    return true;
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> l[i] >> r[i];

    ll l = 0, r = 1e9;
    while(l < r){
        ll mid = (l + r) / 2;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }    
    cout << l << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
