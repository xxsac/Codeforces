#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
char s[N];

void solve(){
    int n; cin >> n;
    cin >> (s + 1);
    map<char, int> mp;
    for(int i = 1; i <= n; ++i){
        if(mp[s[i]] == 0) mp[s[i]] = 1;
        else ++mp[s[i]];
    }
    int mx = 0;
    for(int i = 1; i <= n; ++i){
        mx = max(mx, mp[s[i]]);
    }
    if(mx >= n - mx) cout << 2 * mx - n << '\n';
    else if(n % 2 == 0) cout << 0 << '\n';
    else cout << 1 << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
