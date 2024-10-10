//kiem tra tam giac hop le
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >>c;
    if(a > 0 && b > 0 && c > 0){
        if(a + b > c || a + c > b || b + c > a)
            cout << "YES!" <<endl;
    }else cout << "NO!" <<endl;
    system("pause");
    return 0;
}