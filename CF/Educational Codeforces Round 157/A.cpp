#include<bits/stdc++.h>
using namespace std;

using ll = long long;


void solve(){
    int x, y, k; cin >> x >> y >> k;

    if(y <= x) cout << x << '\n';
    else{
        if(k >= y - x) cout << y << '\n';
        else cout << x + k + 2 * (y - x - k) << '\n';
    }
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while (_ --){
        solve();
    }
    return 0;
}