//tinh tong binh phuong cac so tu 1 toi n
#include<iostream>
#include<windows.h>
#include<math.h>

using namespace std;
int main(){
    int n;
    cin>> n;
    long long res = 1.00 * n * (n + 1) * (2*n + 1) / 6;
    cout << res <<endl;
    system("pause");
    return 0;
}