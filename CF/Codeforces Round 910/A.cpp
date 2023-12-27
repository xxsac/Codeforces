#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
char s[N];

void solve(){
    int n, k; cin >> n >> k;
    cin >> (s + 1);

    int b = 0;
    for(int i = 1; i <= n; ++i){
        b += (s[i] == 'B');
    }

    char c;
    int i = 1;
    while(b != k){
        if(b < k && s[i] == 'A'){
            ++b;
            c = 'B';
        }
        if(b > k && s[i] == 'B'){
            --b;
            c = 'A';
        }
        ++i;
    }

    if(i != 1){
        cout << 1 << '\n' << (--i) << ' ' << c << '\n';
    }else cout << 0 << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
