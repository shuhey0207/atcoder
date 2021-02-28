#include <bits/stdc++.h>
using namespace std;
#define u64 uint64_t

int main()
{
    u64 n;
    cin >> n;
    set<u64> s;

    for(u64 i = 2; i*i <= n; i++){
        u64 x = i*i;
        while(x <= n){
            s.insert(x);
            x *= i;
        }
    }

    cout << n-s.size() << endl;
    return 0;
}