// Phân tích một số thành thừa số các số nguyên tố
// Input: 28   Output: 2 2 7
#include<bits/stdc++.h>
using namespace std;

void phan_tich(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cout << i <<" ";
            n /= i;
        }
    }
    if(n != 1) cout << n <<endl;;
}

int main(){
    int n;
    cin >> n;
    phan_tich(n);
    system("pause");
    return 0;
}