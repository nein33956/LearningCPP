//chuyen ki tu in hoa sang in thuong
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if(c >= 65 && c <= 90)
        c += 32;
    cout << c <<endl;
    system("pause");
    return 0;
}