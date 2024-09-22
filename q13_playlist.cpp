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
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    set<int> seen;
    int l = 0, r = 0, mx = 0;
    while(r < n){
        while(seen.count(a[r]))
            seen.erase(a[l++]);
        seen.insert(a[r++]);
        mx = max(mx, (int)seen.size());
    }
    cout << mx << endl;
}