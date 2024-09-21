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
    int n, m; cin >> n >> m;
    multiset<int> ms;
    for(int i=0 ; i<n ; i++){
        int x; cin >> x;
        ms.insert(x);
    }
    for(int i=0 ; i<m ; i++){
        int p; cin >> p;
        auto it = ms.upper_bound(p);
        if(it == ms.begin()) cout << "-1\n";
        else {
            cout << *(--it) << endl;
            ms.erase(it);  
        }
    }
}