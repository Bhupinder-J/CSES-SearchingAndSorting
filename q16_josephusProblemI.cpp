#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<cmath>

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
    vector<int> a(n);
    for(int i=0 ; i<n ; i++) a[i] = i+1;
    while(a.size() > 1){
        vector<int> b;
        for(int i=0 ; i<a.size() ; i++){
            if(i&1) cout << a[i] <<" ";
            else b.push_back(a[i]);
        }
        if(a.size()&1){
            int first = b.back();
            b.pop_back();
            b.insert(b.begin(), first);
        }
        a = b;
    }
    cout << a[0] << endl;
}