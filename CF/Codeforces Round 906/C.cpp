#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 105;

char s[N];

void solve(){
    int n; cin >> n;
    cin >> (s + 1);
    deque<char> v;
    vector<int> idx;

    int c1 = 0, c0 = 0;
    for(int i = 1; i <= n; ++i){
        v.push_back(s[i]);
        if(s[i] == '1') ++c1;
        if(s[i] == '0') ++c0;
    }

    if(c1 != c0){
        cout << -1 << '\n';
        return;
    }

    int d = 0;
    while(!v.empty()){
        while(!v.empty() && v.front() != v.back()){
            v.pop_front();
            v.pop_back();
            ++d;
        }
        if(v.front() == v.back()){
            if(v.front() == '1'){
                v.push_front('1');
                v.push_front('0');
                idx.push_back(d);
            }else if(v.front() == '0'){
                v.push_back('0');
                v.push_back('1');
                idx.push_back(n - d);
            }      
            n += 2;
        }
    }

    cout << idx.size() << '\n';
    for(auto &x : idx) cout << x << ' ';
    cout << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
