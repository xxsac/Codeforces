#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;

int a[N];

void solve(){
    map<int, int> mp;
    int n; cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(mp.count(a[i])) ++mp[a[i]];
        else mp[a[i]] = 1;
    }

    if(mp.size() > 2){
        cout << "NO" << '\n';
        return;
    }else if(abs(mp.begin()->second - mp.rbegin()->second) <=1){
        cout << "YES" << '\n';
        return;
    }else{
        cout << "NO" << '\n';
        return;
    }
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
