//tinh tong cac so chan tu 2 toi 2n
#include<iostream>
#include<windows.h>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin>> n;
    long long res = 1.00 * n * (1 + n);
    cout << res <<endl;
    system("pause");
    return 0;
}