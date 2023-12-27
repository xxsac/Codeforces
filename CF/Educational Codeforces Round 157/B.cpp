#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 2005;

int a[N];

void solve(){
    memset(a, 0, sizeof a);
    int n; cin >> n;
    int len = 2*n;
    vector< pair<int, int> > points;

    for(int i = 1; i <= len; ++i) cin >> a[i];
    sort(a + 1, a + 1 + len);
    int p = n;
    int diff_x = a[1] - a[p];
    int diff_y = a[p + 1] - a[len];
    int ans = abs(diff_x + diff_y);

    for(int i = 1; i <= n; ++i){
        points.push_back({a[i], a[p + i]});
    }

    cout << ans << '\n';
    for(auto &e : points){
        cout << e.first << ' ' << e.second << '\n';
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