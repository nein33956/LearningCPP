//kiem tra so nguyen to
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1; 
}
int main(){
    long long n;
    cin >> n;
    if(prime(n)) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    system("pause");
    return 0;
}