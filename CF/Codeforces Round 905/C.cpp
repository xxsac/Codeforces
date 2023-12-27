#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;

ll a[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    ll fix = 0x3f3f3f3f3f3f3f3f;
    if(k == 2 || k == 3 || k == 5){
        for(int i = 1; i <= n; ++i){
            if(a[i] % k == 0) fix = 0;
            else{
                ll t = abs((a[i] / k + 1) * k - a[i]);
                fix = min(fix, t);
            }
        }
    }else{
        if(n == 1){
            if(a[1] % k == 0) fix = 0;
            else fix = abs((a[1] / k + 1) * k - a[1]);
        }else{
            ll cnt = 0ll;
            for(int i = 1; i <= n; ++i){
                if(a[i] % k == 0) fix = 0;
                else{
                    ll t = abs((a[i] / k + 1) * k - a[i]);
                    fix = min(fix, t);
                }
                if(a[i] % 2 == 0) ++cnt;
            }
            fix = min(fix, max(0ll, 2-cnt));
        }
    }
    cout << fix << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}