// Lũy thừa nhị phân _ thuật toán chia để trị
/* a^b = a^b/2 * a^b/2 neu b chan
   a^b = a^b/2 * a^b/2 * a neu b le          */
/* vi du: a^10 = a^5 * a^5
          a^5 = a^2 * a^2 * a                */

#include<bits/stdc++.h>
using namespace std;

int pow2(int a, int b){
    long long res = 1;
    while(b != 0){
        if(b % 2 == 1){
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << pow2(a, b) <<endl;
    system("pause");
    return 0;
}