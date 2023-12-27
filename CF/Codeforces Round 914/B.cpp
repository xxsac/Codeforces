#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;

ll a[N], idx[N], c[N];
ll prefix[N];

bool cmp(int x, int y){
    return a[x] < a[y];
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        idx[i] = i;
    }

    sort(idx + 1, idx + 1 + n, cmp);
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + a[i];

    c[idx[n]] = n - 1;
    for(int i = n - 1; i >= 1; --i){
        if(prefix[i] >= a[i + 1]) c[idx[i]] = c[idx[i + 1]];
        else c[idx[i]] = i - 1;
    }
    for(int i = 1; i <= n; ++i) cout << c[i] << ' ';
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}