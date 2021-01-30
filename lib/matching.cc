#include <bits/stdc++.h>
using namespace std;

// 順番を保ったままpartの各値がsetの中にすべて存在するか
template<typename T>
bool sequencial_match(vector<T> part, vector<T> set){
    int i = 0;
    for(auto s : set){
        if(s == part[i]) i++;
        if(i == part.size()) return true;
    }
    return false;
}