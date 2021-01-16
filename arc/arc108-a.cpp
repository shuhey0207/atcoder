#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pb push_back

bool solve()
{
    ll s,p;
    cin >> s >> p;

    for(ll n = 1; n <= sqrt(p); n++){
        if(p%n==0){
            if((n+p/n)==s){
                return true;
            }
        }
    }

    return false;
}

int main()
{
    if(solve()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}