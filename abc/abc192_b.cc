#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool difficult = true;

    for(int i = 0; i < s.size(); i++){
        if(i%2==0){
            if(isupper(s[i])){
                difficult = false;
            }
        }else{
            if(islower(s[i])){
                difficult = false;
            }
        }
    }

    if(difficult){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}