#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e5 + 9;

ll a[N], x[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    ll ans = 0ll, cur = 0ll;
    for(int i = 1; i < n; ++i){
        if(a[i] > a[i + 1]){
            cur = cur + 1+__lg((a[i]-1)/a[i+1]); //采取先内部-1， 后外部+1的方法来实现向上取整
        }else{
            cur = max(0ll, cur - __lg(a[i + 1] / a[i]));
        }
        ans += cur;
    }
    cout << ans << '\n';
    
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}