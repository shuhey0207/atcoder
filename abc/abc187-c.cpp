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
    int n;
    cin >> n;
    unordered_set<string> s;
    rep(i,n){
        string ts;
        cin >> ts;
        s.emplace(ts);
    }
    
    for(auto& tmp : s){
        if(s.count("!" + tmp) == 1){
            cout << tmp << endl;
            return true;
        }
    }
    cout << "satisfiable" << endl;
    return true;
}

int main()
{
    solve();
    return 0;
}