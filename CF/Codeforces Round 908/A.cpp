#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 25;
char s[N];

void solve(){
    int n; cin >> n;
    cin >> (s + 1);
    cout << s[n] << '\n';
}
int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
