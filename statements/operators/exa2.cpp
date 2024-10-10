//toan tu toan hoc
#include<iostream>
#include<windows.h>
#include<iomanip>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich = a * b;
    float thuong = 1.00*a / b;
    int du = a % b;
    cout << tong <<" "<< hieu <<" "<< tich <<" "<< fixed << setprecision(2) << thuong <<" " << du << endl;
    system("pause");
    return 0;
}
