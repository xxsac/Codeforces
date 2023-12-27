#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;

ll a[N];

void solve(){
    ll n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    sort(a + 1, a + 1 + n);
    sum = (sum + 1) / 2;
    ll ans = sum;
    ll count = 0, mark = 0;
    for(int i = 1; i <= n; ++i){
        count += a[i];
        if(count > sum){
            break;
        }
        mark = i;
    }
    cout << ans + n - mark << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
