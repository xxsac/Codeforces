#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;
ll a[N];

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    int increasing = 1;
    for(int i = 2; i <= n; ++i){
        if(a[i] < a[i - 1]){
            increasing = 0;
            break;
        }
    } 
    if(!increasing && k < 2) cout << "NO" << '\n';
    else cout << "YES" << '\n';

}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ -- ) solve();
    return 0;
}
