// Hai số nguyên tố cùng nhau là hai số có ước chung lớn nhất là 1
// Kĩ thuật đệ quy
/*  input: 20 17     output: YES
           14 15             YES
           8 128             NO  */

#include<iostream>
#include<windows.h>
using namespace std;

long long nguyentocungnhau(long long a, long long b){
    if(b == 0)
        return a;
    return nguyentocungnhau(b, a % b) == 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(nguyentocungnhau(a, b))
            cout <<"YES\n";
        else cout <<"NO\n";
    }
    system("pause");
    return 0;
}