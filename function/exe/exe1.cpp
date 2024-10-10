//tinh toan co ban voi ham
//tinh tong cac so tu nhien tu 1 toi n
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    return n * (n + 1) / 2;
}

int main(){
    int a; cin >> a;
    cout << sum(a) <<endl;
    system("pause");
    return 0;
}