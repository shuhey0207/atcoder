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
    int v,t,s,d;
    cin >> v >> t >> s >> d;

    if(d%v==0){
        if(d/v >= t && d/v <= s){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }else{
        if(d/v >= t && d/v < s){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }





    return true;
}

int main()
{
    solve();
    return 0;
}