//tinh khoang cach euclid
#include<iostream>
#include<math.h>
#include<iomanip>
#include<windows.h>

using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin>> x1 >> y1 >> x2 >> y2;
    double kc = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(2) << kc <<endl;
    system("pause");
    return 0;
}
