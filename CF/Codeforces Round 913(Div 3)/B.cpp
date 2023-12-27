#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6 + 9;
char ans[N];

void solve(){
    string s;
    cin >> s;

    int sb = 0, sB = 0;
    vector<char> v;
    for(int i = s.length() - 1; i >= 0; --i){
        if(s[i] == 'b') ++sb;
        if(s[i] == 'B') ++sB;
        if(s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b' && s[i] != 'B' && sb){
            --sb;
        }else if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'b' && s[i] != 'B' && sB){
            --sB;
        }else{
            if(s[i] != 'b' && s[i] != 'B') v.push_back(s[i]);
        }
    }
    if(v.empty()){
        cout << ' ' << '\n';
        return;
    }else{
        int p = 1;
        for(auto &x : v){
            ans[p] = x;
            ++p;
        }
        for(int j = p - 1; j >= 1; --j) cout << ans[j];
        cout << '\n';
    }
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
