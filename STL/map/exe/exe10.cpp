//đếm số từ khác nhau trong xâu
//+ Dòng đầu tiên chứa số testcase
//Mỗi testcase chứa các xâu
/*input: 2                                   output:
        Python C++ jva php Python python            5
        thanh Thanh thanh                           2*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    getchar();
    while(t--){
        string s;
        getline(cin, s);
        map<string, int> mp;
        stringstream ss(s);
        string word;
        while (ss >> word){
            mp[word] = true;
        }
        cout << mp.size() <<endl; 
    } 
    return 0;
}