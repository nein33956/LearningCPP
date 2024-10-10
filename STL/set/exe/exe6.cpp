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
        set<string> se;
        stringstream ss(s);
        string word;
        while (ss >> word){
            se.insert(word);
        }
        cout << se.size() <<endl; 
    }
    system("pause");
    return 0;
}