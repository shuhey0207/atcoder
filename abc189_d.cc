#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> s(100);

ll pow2(ll a){
    ll ret = 1;
    for(int i = 0; i < a; i++) ret *= 2;
    return ret;
}

ll solve(bool y, ll i){
    if(i==0) 
        return 1;
    if(s[i] == "AND"){
        if(y == true)
            return solve(true, i-1);
        else
            return pow2(i+1) - solve(true, i-1);
    }
    else{
        if(y == true)
            return pow2(i+1) - solve(false, i-1);
        else
            return solve(false, i-1);
    }
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s[i+1];
    }

    cout << solve(true, n) << endl;

    return 0;
}