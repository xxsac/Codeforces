#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 2e5 + 9;

string s[N];
map<ll, ll> mp[N]; //第一个值表示字符串的长度， 第二个值表示字符串的总和

ll f(string s){
    ll res = 0;
    for(const auto &i : s) res += i - '0';
    return res;
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> s[i];
    for(int i = 1; i <= n; ++i) mp[s[i].length()][f(s[i])]++ ;

    ll ans = 0;
    for(int i = 1; i <= n; ++i){
        string &t = s[i];
        ll temp = mp[t.length()][f(t)];

        if(t.length() == 3){
            // 1 to left
            temp += mp[1][f(t.substr(t.length() - 2)) - f(t.substr(0, 1))];
            // 1 to right
            temp += mp[1][f(t.substr(0, 2)) - f(t.substr(t.length() - 1))];
        }else if(t.length() == 4){
            // 2 to left
            temp += mp[2][f(t.substr(t.length() - 3)) - f(t.substr(0, 1))];
            // 2 to right
            temp += mp[2][f(t.substr(0, 3)) - f(t.substr(t.length() - 1))];
        }else if(t.length() == 5){
            // 1 to left
            temp += mp[1][f(t.substr(t.length() - 3)) - f(t.substr(0, 2))];
            // 1 to right
            temp += mp[1][f(t.substr(0, 3)) - f(t.substr(t.length() - 2))];
            // 3 to left
            temp += mp[3][f(t.substr(t.length() - 4)) - f(t.substr(0, 1))];
            // 3 to right
            temp += mp[3][f(t.substr(0, 4)) - f(t.substr(t.length() - 1))];
        }
        ans += temp;
    }
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_ --){
        solve();
    }
    return 0;
}