#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 25;
int a[N], b[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    for(int i = 1; i <= n - 1; ++i) b[i] = a[i + 1] - a[i];

    for(int i = 1; i <= n - 1; ++i){
        int j = i;
        if(b[j] < 0 && (j & (j - 1)) != 0){
            cout << "NO" << '\n';
            return;
        }else continue;
    }
    cout << "YES" << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}