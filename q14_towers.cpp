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
    multiset<int> st;
    for(int i=0 ; i<n ; i++){
        int x; cin >> x;
        auto it = st.upper_bound(x);
        if(it != st.end()) 
            st.erase(it);
        st.insert(x);
    }
    cout << st.size() << endl;
}