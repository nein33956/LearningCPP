// Hàm sàng số nguyên tố trên đoạn
// Input: 4 20
// Output: 5 7 11 13 17 19

#include<bits/stdc++.h>
using namespace std;

int max(long long a, long long b){
    if(a > b)
        return a;
    return b;
}

void sang(long long l, long long r){
    long long prime[r - l + 1]; // Khai báo mảng có kích thước là đoạn
    // vector<bool> prime(r - l + 1, true);
    for(long long i = 0; i <= r - l + 1; i++) // Duyệt vòng lặp từ phần tử đầu tiên đến phần tử cuối của đoạn
        prime[i] = 1; // Gán cho các phần tử đó đều là số nguyên tố
    for(long long i = 2; i <= sqrt(r); i++){ // Duyệt các số từ 2 đến căn bậc hai của right
        // Duyệt các bội của i nằm trong đoạn từ left tới right và loại hết các phần tử đó(đánh dấu là 0)
        for(long long j = max(i*i, (l + i - 1) / i * i); j <= r; j += i)
            prime[j - l] = 0;
    }
    // Sau khi loại hết các phần tử thì tiến hành in ra các số nguyên tố trong đoạn ứng với các số đã đánh dấu 0 1
    // 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    // 0 1 0 1 0 0 0  1  0   1  0  0  0  1  0  1  0
    for(long long i = max(l, 2); i <= r; i++){
       if(prime[i - l]) cout << i <<" ";
    }
}

int main(){
    long long l, r;
    cin >> l >> r;
    sang(l, r);
    cout <<endl;
    system("pause");
    return 0;
}