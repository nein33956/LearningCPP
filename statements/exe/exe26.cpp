//giai phuong trinh bac 2
#include<iostream>
#include<math.h>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
    float a, b, c, x1, x2;
    cin >> a >> b >> c;
    if(a == 0){
        if(b == 0 && c == 0){
            cout << "Phuong trinh vo so nghiem!" <<endl;
        }else if(b != 0){
            cout << "Phuong trinh co nghiem duy nhat: x = " << fixed << setprecision(2) << -c / b <<endl;
        }else if(b == 0 && c != 0){
            cout <<"Phuong trinh vo nghiem!"<<endl;
        }
    }else {
        float delta = b * b - 4 * a * c;
        if(delta > 0){
            cout << fixed << setprecision(2) << "x1 = " << 1.00*(-b + sqrt(delta)) / (2 * a) <<endl;
            cout << fixed << setprecision(2) << "x2 = " << 1.00*(-b - sqrt(delta)) / (2 * a) <<endl;
        }else if(delta == 0){
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << fixed << setprecision(2) << -b / (2 * a) <<endl;
        }else cout << "Phuong trinh vo nghiem!" <<endl;
    }
    system("pause");
    return 0;
}