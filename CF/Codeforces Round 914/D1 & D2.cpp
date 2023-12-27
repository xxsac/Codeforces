#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3e5 + 9;
int a[N], b[N];
int ta[N], tb[N];
int n;

int lowbit(int x)
{
    return x & (-x);
}

void a_update(int x)
{
    int lx, i;
    while (x <= n)
    {
        ta[x] = a[x];
        lx = lowbit(x);
        for (i=1; i<lx; i<<=1)
            ta[x] = max(ta[x], ta[x-i]);
        x += lowbit(x);
    }       
}

int a_quiry(int x, int y)
{
    int ans = 0;
    while (y >= x)
    {
        ans = max(a[y], ans);
        y --;
        for (; y-lowbit(y) >= x; y -= lowbit(y))
            ans = max(ta[y], ans);
    }
    return ans;
}

void b_update(int x)
{
    int lx, i;
    while (x <= n)
    {
        tb[x] = b[x];
        lx = lowbit(x);
        for (i=1; i<lx; i<<=1)
            tb[x] = min(tb[x], tb[x-i]);
        x += lowbit(x);
    }       
}

int b_quiry(int x, int y)
{
    int ans = 1e9;
    while (y >= x)
    {
        ans = min(b[y], ans);
        y --;
        for (; y-lowbit(y) >= x; y -= lowbit(y))
            ans = min(tb[y], ans);
    }
    return ans;
}

struct e{
    int bb;
    int idx;
};

bool cmp(e x, e y){
    return x.bb < y.bb;
}

void solve(){
    cin >> n;
    for(int i = 0; i <= n; i++) ta[i]=0, tb[i]=1e9;
    for(int i = 1; i <= n; ++i) cin >> a[i], a_update(i);

    vector<e> g;
    int flag = 0;
    for(int i = 1; i <= n; ++i){
        cin >> b[i];
        if(a[i] != b[i]){
            g.push_back({b[i], i});
            if(a[i] > b[i]) flag = 1;
        }
        b_update(i);
    }
    if(flag == 1){
        cout << "NO" << '\n';
        return;
    }

    sort(g.begin(), g.end(), cmp);

    for(auto &x : g){
        int l = x.idx + 1, r = n; //看看当前点是否有在右边的区间满足
        int ans = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a_quiry(x.idx, mid) == x.bb){ //最大值相等，即区间有机会变换成功
                if(b_quiry(x.idx, mid) >= x.bb){ //b的最小值不能比a还要小，不然在换x时会对区间有影响
                    ans = 1;
                    break;
                }else{
                    r = mid - 1;
                }
            }else{
                if(a_quiry(x.idx, mid) > x.bb){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }

        l = 1, r = x.idx - 1; //看看当前点是否有在左边的区间满足
        while(l <= r){
            int mid = (l + r) / 2;
            if(a_quiry(mid, x.idx) == x.bb){
                if(b_quiry(mid, x.idx) >= x.bb){
                    ans = 1;
                    break;
                }else{
                    l = mid + 1;
                }
            }else{
                if(a_quiry(mid, x.idx) < x.bb){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }

        if(ans == 0){ //表示当前点在左边和右边都没有找到满足条件的区间，直接就可以判断“NO”
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}

