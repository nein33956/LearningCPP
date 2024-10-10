// Khai bao map
// syntax: map<datatype_key, datatype_value> name_map;
// map<int, int> mp;
// map<string, int> m;

// Chen phan tu vao map
//mp[key] = value;
//mp[100] = 200;
//mp.insert({100, 200});
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp;
    mp[100] = 200;
    mp[200] = 300;
    mp.insert({300, 400});
    mp.insert({400, 500});
    mp[300] = 500;
    cout << mp.size() <<endl;
    system("pause");
    return 0;
}
//ta khai bao key 300 2 lan nhung vi moi key se co gia tri duy nhat nen map se hieu la 1 lan
