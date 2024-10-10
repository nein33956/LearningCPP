//cho hai so nguyen duong a va b.
//tim so chia het cho b lon nhat ma khong vuot qua a
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int x = (a / b) * b;
    cout << x <<endl;
    system("pause");
    return 0;
}