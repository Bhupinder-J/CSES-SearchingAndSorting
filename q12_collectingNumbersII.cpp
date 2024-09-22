#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>

using namespace std;

const int N = 1e5 + 1;
const int M = 1e9 + 7;

int32_t main(){
    int n, m; cin >> n >> m;
    vi idx(n), org(n);
    for(int i=0 ; i<n ; i++){
        cin >> org[i];
        idx[--org[i]] = i;
    }
    int cnt = 1;
    vi dp(n + 1, 0);
    for(int i=1 ; i<n ; i++){
        dp[i] = idx[i-1] > idx[i];
        cnt += dp[i];
    }
    const auto updateCount = [](int &count, int d, int l, int r, vi &dp){
        count = count + d * (dp[l] + dp[r] + dp[r + 1]);
        if(l+1 != r) count = count + d * (dp[l + 1]);
    };
    int l, r;
    while(m--){
        cin >> l >> r; --l, --r;
        swap(org[l], org[r]);
        l = org[l], r = org[r];
        swap(idx[l], idx[r]);

        if(l > r) swap(l, r);
        updateCount(cnt, -1, l, r, dp);

        if(l) dp[l] = idx[l - 1] > idx[l];
        if(l+1 < n) dp[l + 1] = idx[l] > idx[l + 1];

        if(r) dp[r] = idx[r - 1] > idx[r];
        if(r+1 < n) dp[r + 1] = idx[r] > idx[r + 1];
        
        updateCount(cnt, 1, l, r, dp);
        cout << cnt << endl;
    }
}