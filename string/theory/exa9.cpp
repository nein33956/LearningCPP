// chen xau khac vao vi tri bat ki trong xau hien tai thong qua chi so chen
//syntax: namestring.insert(idx, string t);
//trong do xau t duoc truyen vao chi so idx cua xau ban dau

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "volethanh";
    s.insert(9, "@@@");
    cout << s <<endl;
    s.insert(0, "blog ");
    cout << s <<endl;
    return 0;
}