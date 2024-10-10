//tach xau con hien tai, ket qua tra ve xau con tach duoc
//syntax: namestring.substr(x); : tra ve xau con tinh tu chi so x
//        namestring.substr(x, n); : tra ve xau con gom n phan tu tinh tu chi so x
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "volethanh.com.vn";
    string sub1 = s.substr(4);
    cout << sub1 <<endl;
    string t = "nein33956789";
    string sub2 = t.substr(0, 9);
    cout << sub2 <<endl;
    return 0;
}