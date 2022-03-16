#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> objList;

    objList.emplace_back(10);
    objList.emplace_back(20);
    objList.emplace_back(30);
    objList.emplace_back(40);
    objList.emplace_back(50);

    for(int& x : objList){
        cout << x<<" ";
    }
}