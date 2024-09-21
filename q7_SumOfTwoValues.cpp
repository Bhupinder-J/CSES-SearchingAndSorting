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

int n, x; 
vector<int> a, idx;

bool comp(const int &li, const int &ri){
    return a[li] < a[ri];
}
int32_t main(){
    cin >> n >> x;
    a = idx = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        idx[i] = i;
    }
    sort(all(idx), comp);
    int l = 0, r = n-1;
    while(l < r){
        int sum = a[idx[l]] + a[idx[r]];
        if(sum < x) ++l;
        else if(sum > x) --r;
        else{
            cout << idx[l]+1 <<" "<< idx[r]+1 << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
}