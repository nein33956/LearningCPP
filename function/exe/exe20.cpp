// Nhập vào 1 số và kiểm tra xem số đó có phải là số Fibo không
// Ý tưởng: duyệt ra tất cả các số Fibo rồi đối chiếu nó với đầu vào
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n == 0 || n == 1)
        return true;
    long long fn2 = 0, fn1 = 1;
    for(int i = 3; i <= 93; i++){
        long long fn = fn1 + fn2;
        if(fn == n)
            return true;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(solve(n)) cout << "YES!\n";
        else cout << "No!\n";
    }
    system("pause");
    return 0;
}