#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;

char s[5];

void solve(){
    cin >> (s + 1);
    int len = strlen(s + 1);
    vector<int> v;
    v.push_back(1);
    for(int i = 1; i <= len; ++i){
        if(s[i] == '0') v.push_back(10);
        else v.push_back(s[i] - '0');
    }
    
    int ans = 0;
    for(int i = 1; i <= 4; ++i){
        ans += abs(v[i] - v[i - 1]);
        ++ans;
    }
    cout << ans << '\n';
    
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}