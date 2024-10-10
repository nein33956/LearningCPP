//chuyen so ngay thang nam
//coi tat ca cac thang la 30 ngay
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nam = n / 365;
    int thang = (n - nam*365) / 30;
    int ngay = n - thang*30 - nam*365;
    cout << nam <<" "<< thang <<" "<< ngay <<endl;
    system("pause");
    return 0;
}