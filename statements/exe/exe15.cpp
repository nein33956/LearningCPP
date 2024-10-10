//kiem tra ki tu in thuong
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    char n;
    cin >> n;
    if(n >= 97 && n <= 122)
        cout << "YES" <<endl;
    else cout << "NO" <<endl;
    system("pause");
    return 0;
}