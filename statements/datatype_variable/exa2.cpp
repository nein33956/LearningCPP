//nhap xuat
#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
    int a, b;//khai bao a b c thuoc kieu int
    cin >> a >> b;//cu phap nhap tu ban phim
    cout << a <<" "<< b << endl;//in ket qua ra man hinh

    float d;//tuong tu voi double
    cin >> d;
    //in ra 4 chu so sau dau thap phan
    cout << fixed << setprecision(4) << d << endl;

    char kitu;
    cin >> kitu;
    cout << kitu << endl;

    bool ok = true;
    cout << ok << endl;
system("pause");
return 0;
}
