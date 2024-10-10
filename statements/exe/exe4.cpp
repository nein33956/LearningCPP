//chuyen don vi do C sang F
#include<iostream>
#include<windows.h>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double F = (1.00 * n * 9 / 5) + 32;
    cout << fixed << setprecision(2) << F << endl;
    system("pause");
    return 0;
}