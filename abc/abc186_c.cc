#include <bits/stdc++.h>
using namespace std;

// numをbase進数で表したときにxを含むか
bool contain_x(int num, int base, int x){
    while( num > 0 ){
        if((num % base) == x){
            return true;
        }
        num /= base;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if( contain_x(i, 8, 7) == false && contain_x(i, 10, 7) == false ){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}