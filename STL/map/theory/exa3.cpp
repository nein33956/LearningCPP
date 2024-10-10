// Duyet map
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp;
    mp[100] = 200;
    mp[100] = 300;//thay doi value cua key 100
    mp[200] = 300;
    mp.insert({300, 400});
    mp.insert({400, 500});
    for(auto i : mp){
        cout << i.first <<" "<< i.second <<endl;
    }
    system("pause");
    return 0;
}