#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pb push_back

bool solve()
{
    ll n;
    cin >> n;
    string t;
    cin >> t;

    if(n==1){
        if(t[0]=='1'){
            cout << 20000000000 << endl; 
        }
        else{
            cout << 10000000000 << endl;
        }
        return true;
    } 

    int offset;
    if(t[0]=='0'&&t[1]=='1'){
        offset = 2;
    }
    else if(t[0]=='1'&&t[1]=='1'){
        offset = 0;
    }
    else if(t[0]=='1'&&t[1]=='0'){
        offset = 1;
    }
    else{
        cout << 0 << endl;
        return false;
    }

    for(ll i = 0; i < n; i++){
        ll tmp=i+offset;

        if(tmp%3==0){
            // 1
            if(t[i]!='1'){
                cout << 0 << endl;
                return false;
            }
        }
        else if(tmp%3==1){
            // 1
            if(t[i]!='1'){
                cout << 0 << endl;
                return false;
            }
        }
        else{
            // 0
            if(t[i]!='0'){
                cout << 0 << endl;
                return false;
            }
        }
    }

    cout << 10000000000-((n+offset-1)/3) << endl;

    return true;
}

int main()
{
    solve();
    return 0;
}