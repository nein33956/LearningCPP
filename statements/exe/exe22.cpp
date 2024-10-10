//in ra so lon nhat va so nho nhat trong 3 so
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int max = a, min = a;
    if(b > max) max = b;
    if(c > max) max = c;
    cout << max <<endl;
    if(b < min) min = b;
    if(c < min) min = c;
    cout << min <<endl;
    system("pause");
    return 0;
}