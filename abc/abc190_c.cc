#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0; i<(n);++i)
#define pb push_back
template<typename T> int max_index(vector<T>& v){auto mi = max_element(v.begin(), v.end()); return distance(v.begin(), mi);}
template<typename T> ll max_value(vector<T>& v){auto mi = max_element(v.begin(),v.end()); return (*mi);}

bool solve()
{
    int n,m,k;
    cin >> n >> m;
    vi a(m);
    vi b(m);
    rep(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vi c(k);
    vi d(k);
    rep(i, k) cin >> c[i] >> d[i];
    
    int ans = 0;
    for(uint32_t i = 0; i < (1 << k); i++){
        bitset<32> bs(i);
        vi s(n,0);
        int sum = 0;
        rep(j, k){
            if(bs[j]){
                s[c[j]-1] = 1;    
            }
            else{
                s[d[j]-1] = 1;
            }
        }
        rep(j, m){
            if(s[a[j]-1] == 1 && s[b[j]-1] == 1){
                sum++;
            }
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}