#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
char a[5];
void solve(){
    cin >> (a + 1);
    for(char i = '1'; i <= '8'; ++i){
        if(i == a[2]) continue;
        cout << a[1] << i << '\n';
    }
    for(char i = 'a'; i <= 'h'; ++i){
        if(i == a[1]) continue;
        cout << i << a[2] << '\n';
    }
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
