//tinh chu vi va dien tich hinh tron voi do chinh xac 2 chu so
#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    cout << fixed << setprecision(2) << 2*3.14*r <<endl;
    cout << fixed << setprecision(2) << 3.14*r*r <<endl;
    system("pause");
    return 0;
}