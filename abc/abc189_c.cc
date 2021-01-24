#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0; i<(n);++i)
#define pb push_back
template<typename T> int max_index(vector<T>& v){auto mi = max_element(v.begin(), v.end()); return distance(v.begin(), mi);}
template<typename T> ll max_value(vector<T>& v){auto mi = max_element(v.begin(),v.end()); return (*mi);}
template<typename T> int min_index(vector<T>& v){auto mi = min_element(v.begin(), v.end()); return distance(v.begin(), mi);}
template<typename T> ll min_value(vector<T>& v){auto mi = min_element(v.begin(),v.end()); return (*mi);}
 
int n;
vi a(1000000);
 
int solve(int l ,int r){
    if(l < 0 || l >= r || r > n) return 0;
    auto min_itr = min_element(a.begin() + l, a.begin() + r); 
    int min_index = distance(a.begin(), min_itr);
    return max(max(solve(l, min_index), solve(min_index + 1, r)), (r-l) * (*min_itr));
}

int main()
{
    cin >> n;
    rep(i, n){
        cin >> a[i];
    }
 
    cout << solve(0, n) << endl;
    return 0;
}