#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool good = true;
    for(int i = 0; i < 3; i++){
        if(s[i] == s[i+1]) good = false;
    }

    if(good) cout << "Good" << endl;
    else cout << "Bad" << endl;
    return 0;
}