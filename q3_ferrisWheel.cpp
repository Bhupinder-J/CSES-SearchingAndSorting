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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(all(a));

    int count = 0, i = 0, j = n-1;
    while(i <= j){
        if(a[i] + a[j] <= x) ++i;
        ++count, --j;
    }
    cout << count << endl;
}