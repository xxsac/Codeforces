#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
char s[N];

void solve(){
    int n; cin >> n;
    cin >> (s + 1);

    int one = 0, zero = 0;
    int flag = 0;
    for(int i = 1; i <= n; ++i){
        one += (s[i] == '1');
        zero += (s[i] == '0');
        if((s[i] == '0' && s[i + 1] == '0') || (s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')){
            flag = 1;
        }
    }
    if(zero > one){
        cout << "YES" << '\n';
    }
    else if(flag){
        cout << "YES" << '\n';
    }else cout << "NO" << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
