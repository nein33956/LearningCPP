//tinh tong nghich dao cac so nguyen tu 1 toi n
#include<iostream>
#include<windows.h>
#include<iomanip>

using namespace std;
int main(){
    int n;
    cin>> n;
    float res = 1 - 1.00 / (1 + n);
    cout << fixed << setprecision(2) << res <<endl;
    system("pause");
    return 0;
}