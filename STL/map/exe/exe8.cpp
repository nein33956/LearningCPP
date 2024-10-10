//tìm kí tự xuất hiện nhiều nhất trong chuỗi
//+ Dòng đầu tiên là số bộ test
//+ Dòng thứ 2 là chuỗi bao gồm cả dấu cách
/*intput:                       output:
        1
        abcdzzzu abcd                 z*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; //nhập vào số bộ test
    getchar(); // xử lí dấu enter
    while(t--){
        //khai báo và nhập vào mảng kí tự chưa cả dấu cách
        string s; getline(cin, s);
        //khai báo map để lưu kí tự(char-key) và tần xuất(int-value)
        map<char, int> mp;
        //duyệt mảng kí tự và tăng tần xuất(value)
        for(auto x : s){
            mp[x]++;
        }
        int max_fre = 0; //khởi tạo biến để lưu tần xuất lớn nhất
        char res; //khởi tạo biến để lưu kí tự xuất hiện nhiều nhất
        //duyệt map để tìm kí tự và tần xuất xuất hiện nhiều nhất
        for(auto i : mp){
            if(i.second > max_fre){
                max_fre = i.second;
                res = i.first;
            }
        }
        //in ra kí tự có số lần xuất hiện nhiều nhất
        cout << res <<endl;
    }
    system("pause");
    return 0;
}