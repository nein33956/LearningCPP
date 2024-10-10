/*cho mang mot chieu cac so nguyen khong am, dem cac so nguyen duong x > 1
sao cho cac phan tu trong mang deu chia het cho x*/
/*input: 1                output:
         4
         8 24 16 32             3
    vi du: 8 24 16 32 co ba uoc lon hon 1 do chinh la 2 4 8,
trong do cac so kia cung chia het cho chung*/
//idea: tim uoc chung lon nhat cua cac phan tu trong mang.
//sau do tim uoc cua phan tu la uoc chung do roi in ra so luong

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        //khai bao res de luu uoc chung lon nhat cua cac phan tu trong mang
        int res = 0;
        //duyet vong lap tim uoc chung lon nhat cua cac phan tu trong mang
        for(int i = 0; i < n; i++){
            res = gcd(res, a[i]);
        }
        if(res == 1){
            cout << "0" <<endl;
            continue;
        }
        //khai bao bien ans la ket qua(so uoc cua uoc chung lon nhat)
        int ans = 1;
        for(int i = 2; i < sqrt(res); i++){
            if(res % i == 0){
                ++ans;
                if(i != res/i) ++ans;
            }
        }
        cout << ans;
    }
    return 0;
}