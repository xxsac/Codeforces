#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;

int x[5], y[5], z[5];
void solve(){
    for(int i = 1; i <= 3; ++i) cin >> x[i];
    
    vector<int> v;
    if((x[2] + x[3]) % 2 == 0) v.push_back(1);
    else v.push_back(0);

    if((x[1] + x[3]) % 2 == 0) v.push_back(1);
    else v.push_back(0);

    if((x[1] + x[2]) % 2 == 0) v.push_back(1);
    else v.push_back(0);

    for(auto &x : v) cout << x << ' ';
    cout <<'\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}
