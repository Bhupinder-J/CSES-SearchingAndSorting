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
#define fastio() ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0)     

using namespace std;

const int N = 1e5 + 1;
const int M = 1e9 + 7;

int32_t main(){
    fastio();
    int x, n; cin >> x >> n;
    multiset<int, greater<int>> ms({x});
    set<pii> st({{0, x}});

    while(n--){
        cin >> x;
        auto it = st.lower_bound({x, 0});
        --it;
        int s = it->first, e = it->second;

        st.erase(it);
        st.insert({s, x});
        st.insert({x, e});

        ms.erase(ms.find(e - s));
        ms.insert(x - s);
        ms.insert(e - x);

        cout << *ms.begin() << " ";
    }
}