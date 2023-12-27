#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;

void solve(){
    ll n, P, l, t; cin >> n >> P >> l >> t;
    ll num_tasks = (n + 7 - 1) / 7;
    ll combine = (P + (2 * t + l) - 1) / (2 * t + l);
    if(combine <= num_tasks / 2){
        cout << n - combine << '\n';
    }else{
        P -= num_tasks / 2 * (2 * t + l); n -= num_tasks / 2;
        P -= num_tasks % 2 * (t + l); n -= num_tasks % 2;
        if(P <= 0){
            cout << n << '\n';
        }else{
            cout << n - ( (P + l - 1) / l) << '\n';
        }

    }
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
