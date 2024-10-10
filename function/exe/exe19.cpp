// Liệt kê n số Fibo đầu tiên
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    cout << "0 1 ";             // In ra thủ công 2 số đầu của dãy Fibo
    long long fn2 = 0, fn1 = 1; // Gán 2 biến fn2 và fn1 cho 2 số đầu của dãy Fibo
    // Duyệt vòng lặp bắt đầu từ số thứ 3
    for(int i = 3; i <= n; i++){
        long long fn = fn1 + fn2;
        cout << fn <<" ";
        fn2 = fn1;
        fn1 = fn;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
    cout <<endl;
    system("pause");
    return 0;
}