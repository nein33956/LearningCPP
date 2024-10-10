#include<iostream>
using namespace std;
int main(){
    int n, x; cin >> n >> x;
    int dem = 0;
    while(n != 0){
        if(n % 10 == x) dem += 1;
        n /= 10;
    }
    cout << dem << endl;
    system("pause");
    return 0;
}