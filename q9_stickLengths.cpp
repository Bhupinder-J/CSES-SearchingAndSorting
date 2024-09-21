#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>

#define int long long
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
using namespace std;

const int N = 1e5 + 1;
const int M = 1e9 + 7;

int32_t main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(all(a));
    int x = a[n/2], cnt = 0;
    for(int i=0 ; i<n ; i++){
        cnt += abs(a[i] - x);
    }
    cout << cnt << endl;
}