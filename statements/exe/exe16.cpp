//kiem tra ki tu in hoa
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    char n;
    cin >> n;
    if(n >= 65 && n <= 90)
        cout << "YES" <<endl;
    else cout << "NO" <<endl;
    system("pause");
    return 0;
}