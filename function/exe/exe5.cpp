//tinh tong cac chu so cua so va kiem tra xem tong do co nguyen to khong
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int sum(int n){
    int res = 0;       // khoi tao tao bang 0
    while(n){
        res += n % 10; // lay chu so cuoi cung cua so cong vao res
        n /= 10;       // loai bo chu so cuoi cung
    }
    return res;
}

int main(){
    int n; cin >> n;
    int tong = sum(n);
    cout << tong <<endl;
    if(prime(tong)) cout << "Yes!" <<endl;
    else cout << "No!" <<endl;
    system("pause");
    return 0;
}