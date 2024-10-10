//tinh tong cac so chia het cho 3 tu 1 toi n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i += 3){
        sum += i;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}