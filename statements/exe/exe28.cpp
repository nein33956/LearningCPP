#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    // Tính số lượng cặp không trùng nhau cộng lại chia hết cho k
    // Nếu k là số lẻ, ta sẽ có (n/k) * (n/k) cặp
    // Nếu k là số chẵn, ta sẽ có (n/k) * (n/k - 1) cặp
    long long count = 0;

    if (k % 2 == 1) {
        count = (n / k) * (n / k);
    } else {
        count = (n / k) * (n / k);
    }

    cout << count << endl;

    return 0;
}
