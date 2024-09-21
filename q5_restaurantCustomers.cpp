#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>

#define int long long
#define all(x) x.begin(), x.end()
using namespace std;

const int N = 1e5 + 1;
const int M = 1e9 + 7;

int32_t main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0 ; i<n ; i++){
        int x, y; cin >> x >> y;
        mp[x]++, mp[y]--;
    }
    int mx = 0, cur = 0;
    for(auto &[t, cnt] : mp){
        cur += cnt;
        mx = max(mx, cur);
    }
    cout << mx << endl;
}