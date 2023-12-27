 #include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 55;

char s[N], t[N];

void solve(){
    int n, m; cin >> n >> m;
    cin >> (s + 1) >> (t + 1);
    if(n == 1){
        cout << "YES" << '\n';
        return;
    }
    int flag = 0;
    for(int i = 1; i < m; ++i){
        if(t[i] - t[i + 1] == 0){
            flag = 1;
            break;
        }
    }
    char st = t[1], en = t[m];
    for(int i = 1; i < n; ++i){
        if(s[i] - s[i + 1] == 0){
            if(flag == 1){
                cout << "NO" << '\n';
                return;
            }else if(s[i] == st || s[i + 1] == en){
                cout << "NO" << '\n';
                return;
            }
        }else continue;
    }
    cout << "YES" << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
