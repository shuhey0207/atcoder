#include <bits/stdc++.h>
using namespace std;

struct Store{
    int id,p;
    string s;
};

int main()
{
    int n;
    cin >> n;
    vector<Store> stores(n);

    for(int i = 0; i < n; i++){
        cin >> stores[i].s >> stores[i].p;
        stores[i].id = i+1;
    }

    sort(stores.begin(), stores.end(), [](const Store& a, const Store& b){
        if(a.s == b.s){
            return a.p > b.p;
        }
        else {
            return a.s < b.s;
        }
    });

    for(auto& store : stores){
        cout << store.id << endl;
    }
    return 0;
}