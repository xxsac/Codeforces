#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e3 + 9;
ll a[N], M[N][N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> M[i][j];

    for(int i = 1; i <= n; ++i) a[i] = (1 << 30) - 1;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(i ^ j){
                a[i] &= M[i][j];
                a[j] &= M[i][j];
            }
        }
    }
    
    for(int i = 1; i <= n; ++i){
        for(int j = i + 1; j <= n; ++j){
            if((a[i] | a[j]) == M[i][j]) continue;
            else{
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ -- ) solve();
    return 0;
}


