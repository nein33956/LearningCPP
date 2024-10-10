//them va xoa mot ki tu o cuoi xau
// them: name_string.push_back('...');
// xoa: name_string.pop_back('...');
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "volethanh";
    s.push_back('@'); //them ki tu
    cout << s <<endl;
    s.push_back('#'); //them ki tu
    cout << s <<endl;
    s.pop_back();     //xoa 1 ki tu
    cout << s <<endl;
    system("pause");
    return 0;
}