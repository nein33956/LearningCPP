//kiem tra xem ki tu co phai chu so hay khong
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if(c >= 48 && c <= 57)
        cout << "YES" <<endl;
    else cout << "NO" <<endl;
    system("pause");
    return 0;
}