#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 2e5 + 9, inf = 4e18;
int a[N], b[N];

#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(rall(b));
    merge(all(a), all(b), c.begin(), greater<int>());
    
    for (int i = 0; i < n + m; i++) cout << c[i] << ' ';
    cout << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
