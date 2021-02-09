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
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    int ss[10][10];
    rep(i, h) {
        cin >> s[i];
        rep(j, w){
            if(s[i][j] == '#'){
                ss[i][j] = 1;
            }else{
                ss[i][j] = 0;
            }
        }
    }

    int ans = 0;
    rep(i, h) {
        if(i==0)continue;
        bool flag = true;
        rep(j, w){
            if(flag && ss[i-1][j] != ss[i][j]){
                ans += 2;
                flag = false;
            }
            if(ss[i-1][j] == ss[i][j]){
                flag = true;
            }

        }
    }
            cout << ans << endl;
    return true;
}

int main()
{
    solve();
    return 0;
}