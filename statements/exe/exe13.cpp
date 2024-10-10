//cho hai so a va b
//tim so chia het cho b nho nhat va lon hon hoac bang a
#include<iostream>
#include<windows.h>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << ((a + b - 1) / b) * b <<endl;
    system("pause");
    return 0;
}