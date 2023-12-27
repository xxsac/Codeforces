#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;

int dx[4] = {-1, -1, 1, 1}, dy[4] = {-1, 1, -1, 1};

void solve(){
    ll a, b; cin >> a >> b;
    ll xk, yk; cin >> xk >> yk;
    ll xq, yq; cin >> xq >> yq;

    set<pair<ll, ll> > p1, p2;
    for(int i = 0; i < 4; ++i){
        p1.insert({xk + dx[i] * a, yk + dy[i] * b});
        p1.insert({xk + dx[i] * b, yk + dy[i] * a});
        p2.insert({xq + dx[i] * a, yq + dy[i] * b});
        p2.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    ll ans = 0ll;
    for(auto &x : p1){
        if(p2.find(x) != p2.end()){
            ++ans;
        }
    }
    cout << ans << '\n';
    
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}