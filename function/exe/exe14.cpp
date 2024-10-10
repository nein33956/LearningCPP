//tinh tong uoc so cua mot so nguyen
#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

int count(int n){
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i != n/i) sum += i + n/i;
            else sum += i;
        }
    }
    return sum;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << count(n) <<endl;
    }
    system("pause");
    return 0;
}