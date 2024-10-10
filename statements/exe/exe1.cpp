//tinh tong hieu tich thuong hai so lay do chinh xac 2 chu so
#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
    int  a, b;
    cin >> a >> b;
    cout << a + b <<endl;
    cout << a - b <<endl;
    cout << 1.00*a * b <<endl;
    cout << fixed << setprecision(2) << 1.00*a / b <<endl;
    system("pause");
    return 0;
}