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
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(all(a)), sort(all(b));

    int i = 0, j = 0, cnt = 0;
    while(i<n and j<m){
        if(abs(a[i] - b[j]) <= k)   // desired size
            cnt++, i++, j++; 
        else if(a[i] < b[j]) i++;   // size is bigger
        else j++;                   // size is smaller
    }
    cout << cnt << endl;
}