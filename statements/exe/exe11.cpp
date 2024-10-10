//tinh tong S = -1+2-3+4-5+6...(-1)^n*n = n/2 neu n chan va (n-1)/2 - n neu n le
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    long long n, res;
    cin >> n;
    if(n % 2 == 0){
        res = n / 2;
        cout << res <<endl;
    }else if(n % 2 != 0){
        res = (n-1) / 2 - n;
        cout << res <<endl;
    }
    system("pause");
    return 0;
}