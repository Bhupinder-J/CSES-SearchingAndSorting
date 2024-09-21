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

bool comp(const pii &p1, const pii &p2){
    return p1.second < p2.second;
}
int32_t main(){
    int n; cin >> n;
    vector<pii> t(n);
    for(int i=0 ; i<n ; i++)
        cin >> t[i].first >> t[i].second;
    sort(all(t), comp);

    int count = 0, last = 0;
    for(int i=0 ; i<n ; i++){
        if(t[i].first < last)   
            continue;
        count += 1;
        last = t[i].second;
    }
    cout << count << endl;  
}