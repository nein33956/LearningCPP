// In ra các số nguyên tố nhỏ hơn n, sử dụng thuật toán sàng số nguyên tố Eratosthenes
#include<bits/stdc++.h>
using namespace std;
    
int prime[1000001]; // Khai báo mảng có kích thước 10^6 + 1

void sang(){
    // Ban đầu coi tất cả các phần tử đầu tiên đều là số nguyên tố
    for(int i = 0; i <= 1000000; i++)
        prime[i] = 1;
    // Loại bỏ thủ công hai số 0 và 1
    prime[0] = prime[1] = 0;
    // Duyệt các phần từ từ 2 tới căn bậc 2 của mảng
    for(int i = 2; i <= 1000; i++){
    // Kiểm tra nếu i là số nguyên tố thì ta loại các bội của i
        if(prime[i]){
            // Duyệt các bội của i
            // Khai báo j là bội của i
            for(int j = i * i; j <= 1000000; j += i)
                // Loại các phần tử là bội đó
                prime[j] = 0;
        }
    }
}

int main(){
    sang();
    long long n; cin >> n;
    for(int i = 0; i <= n; i++){
        if(prime[i])
            cout << i <<" ";
    }
    system("pause");
    return 0;
}
