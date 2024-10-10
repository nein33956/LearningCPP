// Ước chung lớn nhất và bội chung nhỏ nhất
// a > b => gcd(a, b) = gcd(b, a-b)
// Ví dụ: tìm ước chung lớn nhất của 20 và 30
// gcd(20, 30) = gcd(20, 30-20) = gcd(20, 10) = gcd(10, 10) vay uoc chung lon nhat cua 20 va 30 la 10
// vidu tinh gcd(18, 8)= gcd(10(a), 8) = gcd(2, 8(a)) = gcd(2, 6) = gcd(2, 4) = gcd(2, 2)
// BCNN là thương giữa tích của 2 số đó và ước chung lớn nhất

#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a == 0 || b == 0)
        return a + b;              // Nếu a = 0 thì ước chung lớn nhất là b và ngược lại
    while(a != b){
        if(a > b)                  // Kiếm tra a và b
            a = a - b;             // gán a là hiệu của a - b
        else b = b - a;
    }
    return a;
}

long long lcm(long long a, long long b){
    return a*b / gcd(a, b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout <<"Uoc chung lon nhat la: "<< gcd(a, b) <<endl;
    cout <<"Boi chung nho nhat la: "<< lcm(a, b) <<endl;
    system("pause");
    return 0;
}