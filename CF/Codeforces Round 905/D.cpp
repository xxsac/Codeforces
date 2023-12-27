#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e6 + 9;

multiset<int> lt;
multiset<int> rt;

void solve(){
    char op; cin >> op;
    if(op == '+'){
        int l, r; cin >> l >> r;
        lt.insert(l), rt.insert(r);
    }else{
        int l, r; cin >> l >> r;
        lt.erase(lt.find(l)), rt.erase(rt.find(r));
    }
    cout << (lt.upper_bound(*rt.begin()) == lt.end() ? "NO" : "YES" )<<'\n';

}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int _; cin >> _;
    while(_ --){
        solve();
    }
    return 0;
}