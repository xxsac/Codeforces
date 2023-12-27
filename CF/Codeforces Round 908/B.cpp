#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 105;
int a[N], b[N], cnt[N];

void solve(){
    memset(cnt, 0, sizeof cnt);
    int n; cin >> n;
    int num = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(cnt[a[i]] == 0) ++cnt[a[i]];
        else if(cnt[a[i]] == 1 && num < 2){
            ++num;
            cnt[a[i]] = num + 1;
        }
        
        b[i] = cnt[a[i]];
    }
    if(num < 2){
        cout << -1 << '\n';
        return;
    }
    for(int i = 1; i <= n; ++i) cout << b[i] << ' ';
    cout << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
