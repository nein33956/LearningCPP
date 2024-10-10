//in ra cac so nguyen to tu 1 toi n
#include<bits/stdc++.h>
using namespace std;

bool prime_number(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    int x; cin >> x;
    for(int i = 1; i <= x; i++){
        if(prime_number(i)) cout << i <<" ";
    }
    system("pause");
    return 0;
}