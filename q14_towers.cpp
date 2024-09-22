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
#define all(x) begin(x), end(x)

using namespace std;

const int N = 1e5 + 1;
const int M = 1e9 + 7;

int32_t main(){
    int n; cin >> n;
    vector<int> st;
    for(int i=0 ; i<n ; i++){
        int x; cin >> x;
        auto it = upper_bound(all(st), x);
        if(it == st.end()) 
            st.push_back(x);
        else *it = x;
    }
    cout << st.size() << endl;
}