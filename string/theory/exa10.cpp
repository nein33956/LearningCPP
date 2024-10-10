//xoa ki tu cua xau hien tai thong qua chi so
//syntax: namestring.erase(x); : xoa tat ca ki tu tu chi so x toi cuoi xau
//        namestring.erase(x, n); : xoa n ki tu trong xau tinh tu chi so x
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "volethanh.com.vn";
    s.erase(9);
    cout << s <<endl;
    string t = "volethanh.com.vn";
    t.erase(9, 4);
    cout << t;
    return 0;
}