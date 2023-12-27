#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;


char s[N];

void solve(){
    int n, k; cin >> n >> k;
    map<char, int> mp;
    cin >> (s + 1);
    for(int i = 1; i <= n; ++i){
        if(mp.count(s[i])) ++mp[s[i]];
        else mp[s[i]] = 1;
    }

    int odd = 0;
    for(auto &x : mp){
        if(x.second % 2 != 0) ++odd;
    }
    
    if(odd <= k + 1) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}