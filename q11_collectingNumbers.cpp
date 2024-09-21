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
    vector<pii> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    int count = 1;
    for(int i=1 ; i<n ; i++){
        count += a[i].second < a[i-1].second;
    }
    cout << count << endl;
