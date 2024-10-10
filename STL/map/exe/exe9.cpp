//Xâu pangram
//+ Dòng đầu tiên chưa số lượng testcase
//+ Dòng thứ 2 chứ xâu chỉ bao gồm chữ cái
//in ra yes hoặc no nếu xâu đủ các chữ cái và không đủ
/*intput: 2                              output:
        ThequickbrownfoxjumpsoverlazyDOG        YES
        neineilMaN                              NO*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; //nhập số bộ test
    getchar(); //xử lí trôi lệnh
    while(t--){
        //khai báo và nhập xâu 
        string s;
        getline(cin, s);
        map<char, bool> mp; //khai báo map để lưu xâu
        for(char x : s){
            mp[tolower(x)] = true; //lưu xâu(key) dạng in thường hết
        }
        if(mp.size() == 26) cout << "YES" <<endl;//nếu xâu có đủ các chữ cái (key) thì in ra YES
        else cout << "NO" <<endl; //không thì in ra NO
    }
    system("pause");
    return 0;
}