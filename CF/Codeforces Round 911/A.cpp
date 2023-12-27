#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
char s[N];

void solve(){
    int n; cin >> n;
    cin >> (s + 1);

    int ans = 0;
    int point = 0;
    for(int i = 1; i <= n; ++i){
        if(i <= n - 2 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
            ans = 2;
            cout << ans << '\n';
            return;
        }else if(s[i] == '.'){
            ++point;
            ++ans;
        }else continue;
    }
    if(point == 0) cout << 0 << '\n';
    else cout << ans << '\n';

}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
