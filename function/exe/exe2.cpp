//tinh tong 1 + 1/2 + 1/3 + 1/4...+ 1/n
#include<bits/stdc++.h>
using namespace std;

double sum(int n){
    double tong = 0;
    for(int i = 1; i <= n; i++){
        tong += 1.00 / i;
    }
    return tong;
}

int main(){
    int x; cin >> x;
    cout << fixed << setprecision(4) << sum(x) <<endl;
    system("pause");
    return 0;
}