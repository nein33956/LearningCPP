//Tinh gia tri cua da thuc theo bac x
//vi du nhap: 2 3 4 1 thi la 2x^3 + 3x^2 + 4x + 1
//voi n la so phan tu va x la he so
/*input: 1            output: 
         4 2
         1 2 0 4            20*/

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // khai bao bien lt de luu gia tri x^i
        // res de tinh tong cac phan tu
        ll lt = 1, res = 0;
        //duyet nguoc mang tu cuoi ve dau
        for(int i = n - 1; i >= 0; i--){
            //cong res vao gia tri a[i] * lt
            res += a[i] * lt;
            //lay phan du cua res khi chia cho mod de tranh tran so
            res %= MOD;
            //nhan so mu cho x de chuan bi cho buoc tiep theo
            lt *= x;
            //lay phan du cua lt khi chia cho mod de tranh tran so
            lt %= MOD;
        }
        cout << res <<endl;
    }
    return 0;
}