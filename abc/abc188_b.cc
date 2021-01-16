#include <bits/stdc++.h>
using namespace std;
#define 

int main()
{
    int n;
    cin >> n;
    int a[100000] = {0};
    int b[100000] = {0};

    long long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        ans += a[i] * b[i];
    }

    if(ans == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}