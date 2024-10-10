// Đếm số lượng số nguyên tố cùng nhau không vượt quá n
// Thuật toán dùng là phi hàm Eucler
/*input                           output
         2
         9                              6
         10000000000000000              4000000000000000*/

#include<bits/stdc++.h>
using namespace std;

// Thuật toán Euclid để tìm ước chung lớn nhất của 2 số a và b
long long gcd(long long a, long long b){
    if(b == 0)
        return a;
    // Đệ quy
    return gcd(b, a % b);
}

// Phi hàm Eucler cho số nguyên n
long long phi_ham(long long n){
    // Khởi tạo res là kết quả của phi hàm
    long long res = n;
    // Duyệt từ 2 đến căn bậc 2 của n
    for(int i = 2; i <= sqrt(n); i++){
        // Kiểm tra xem i có phải là ước của n hay không
        if(n % i == 0){
            // Nếu là ước của n
            while(n % i == 0)
                // Chia n cho i đến khi nó không còn chia hết
                n /= i;
            // Giảm res khi tìm được 1 ước số
            res -= res / i;
        }
    }
    // Kiểm tra lại xem n còn ước số nguyên tố nào hay không
    if(n != 1)
        res -= res / n;
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << phi_ham(n) <<endl;
    }
    system("pause");
    return 0;
}