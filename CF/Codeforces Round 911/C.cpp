#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3e5 + 9;

pair<int, int> g[N];
char p[N];

int dfs(int u){
    if(g[u].first == 0 && g[u].second == 0) return 0;

    int ans = INT_MAX;
    if(p[u] == 'U'){
        if(g[u].first) ans = min(ans, dfs(g[u].first) + 1);
        if(g[u].second) ans = min(ans, dfs(g[u].second) + 1);
    }
    if(p[u] == 'L'){
        if(g[u].first) ans = min(ans, dfs(g[u].first));
        if(g[u].second) ans = min(ans, dfs(g[u].second) + 1);
    }
    if(p[u] == 'R'){
        if(g[u].first) ans = min(ans, dfs(g[u].first) + 1);
        if(g[u].second) ans = min(ans, dfs(g[u].second));
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    cin >> (p + 1);
    for(int i = 1; i <= n; ++i){
        int l, r; cin >> l >> r;
        g[i].first = l;
        g[i].second = r;
    }
    
    cout << dfs(1) << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}


