//xay dung ham kiem tra so nguyen to
#include<bits/stdc++.h>
using namespace std;

bool prime_number(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    int a; cin >> a;
    if(prime_number(a)) cout << "YES!" <<endl;
    else cout << "NO!" <<endl;
    system("pause");
    return 0;
}