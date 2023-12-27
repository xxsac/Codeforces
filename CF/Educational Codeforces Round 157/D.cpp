#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;

int prexor[N], nex[2 * N][2], idx = 1;

void insert(int val){
    int x = 1;
    for(int i = 20; i >= 0; --i){
        int w = (val >> i & 1);
        if(!nex[x][w]) nex[x][w] = ++idx;
        x = nex[x][w];
    }
}

//返回所有数字异或val的最大值
int getMax(int val){
    int x = 1, res = 0;
    for(int i = 20; i >= 0; --i){
        int w = (val >> i & 1);
        if(nex[x][w ^ 1]) x = nex[x][w ^ 1], res |= (1 << i);
        else x = nex[x][w];
    }
    return res;
}


void solve(){
    int n; cin >> n;
    for(int i = 1; i < n; ++i){
        int x; cin >> x;
        prexor[i] = prexor[i - 1] ^ x;
        insert(prexor[i]);
    }    
    insert(prexor[0]);

    int b1 = -1;
    for(int i = 0; i < n; ++i){
        if(getMax(i) == n - 1){
            b1 = i;
            break;
        }
    }
    for(int i = 1; i <= n; ++i) cout << (prexor[i - 1] ^ b1) << ' ';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_ --){
        solve();
    }
    return 0;
}