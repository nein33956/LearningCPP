//tinh tong cac chu so
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << sum <<endl;
    system("pause");
    return 0;
}