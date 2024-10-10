//tinh tong cac so tu 1 toi n
//S = n(1+n) / 2
#include<iostream>
#include<windows.h>
#include<math.h>

using namespace std;
int main(){
    int n;
    cin>> n;
    long long tong = 1.00 * n * (1 + n) / 2;
    cout << tong <<endl;
    system("pause");
    return 0;
}