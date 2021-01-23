#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    
    if(n[0] == n[1] && n[0] == n[2]){
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }
    
    return 0;
}