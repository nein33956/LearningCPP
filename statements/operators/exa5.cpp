//toan tu logic and of not
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int a = 100, b = 200, c = 300, d = 400;
    int res = (a < b) && (a < c || c < d) && (b <= d);
    cout << res << endl;
system("pause");
return 0;
}