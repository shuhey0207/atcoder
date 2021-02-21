#include <bits/stdc++.h>
using namespace std;

vector<int> to_vector(int x){
    vector<int> ret;

    while(x != 0){
        ret.emplace_back(x%10);
        x /= 10;
    }
    return ret;
}

int g1(int x){
    int ret = 0;
    vector<int> dec_x = to_vector(x);

    sort(dec_x.begin(), dec_x.end(), less<int>());
    for(int i = 0; i < dec_x.size(); i++){
        ret += dec_x[i] * pow(10, i);
    }
    return ret;
}

int g2(int x){
    int ret = 0;
    vector<int> dec_x = to_vector(x);

    sort(dec_x.begin(), dec_x.end(), greater<int>());
    for(int i = 0; i < dec_x.size(); i++){
        ret += dec_x[i] * pow(10, i);
    }
    return ret;
}

int f(int x){
    return g1(x) - g2(x);
}

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(k+1);
    a[0] = n;
    
    for(int i = 0; i < k; i++){
        a[i+1] = f(a[i]);
    }  

    cout << a[k] << endl;
    return 0;
}