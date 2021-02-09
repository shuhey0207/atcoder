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
    int n,x;
    cin >> n >> x;
    rep(i, n) {
        int a;
        cin >> a;
        if(a != x){
            cout << a << " ";
        }
    }
    cout << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}