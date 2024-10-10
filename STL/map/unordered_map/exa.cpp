//không sắp xếp các phần tử theo thứ tự và không lưu key giống nhau
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int> mp;
    mp.insert({100, 200});
    mp.insert({100, 600});\
    mp.insert({300, 0});
    mp.insert({200, 300});
    mp.insert({100, 400});
    mp.insert({200, 0});
    for(auto i : mp){
        cout << i.first <<" "<< i.second <<endl;
    }
    system("pause");
    return 0;
}