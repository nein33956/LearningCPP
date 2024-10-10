//tinh tong, tich va trung binh cong cac phan tu trong mang
#include<bits/stdc++.h>
using namespace std;

int sum_idx(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int product_idx(int a[], int n){
    long long product = 1;
    for(int i = 0; i < n; i++)
        product *= a[i];
    return product;
}

double trungbinhCong(int a[], int n){
    double tbc = 0;
    for(int i = 0; i < n; i++)
        tbc +=a[i];
    return tbc / n;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << sum_idx(a, n) <<endl;
    cout << product_idx(a, n) <<endl;
    cout << fixed << setprecision(4) << trungbinhCong(a, n) <<endl;
    system("pause");
    return 0;
}