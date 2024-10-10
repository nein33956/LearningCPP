//chuyen ki tu in thuong thanh in hoa
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if(c >= 97 && c <= 122)
        c -= 32;
    cout << c <<endl;
    system("pause");
    return 0;
}