//tim khoang cach nho nhat giua hai phan tu trong mang (khong am)
/*input: 2                            output:
         5
         2 4 5 7 9                          1
         10
         87 32 99 75 56 43 21 10 68 49      6*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t; //nhap so bo test
    while(t--){
        int n; cin >> n;//nhap so phan tu cua mang
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        //khoi tao bien res de luu ket qua (khoang cach) la mot so rat lon
        int res = INT_MAX;
        for(int i = 0; i < n; i++){//phan tu dau tien
            for(int j = i + 1; j < n; j++){//phan tu dung sau
            //hieu so lon va so be
                res = min(res, max(a[i], a[j]) - min(a[i], a[j]));
            }
        }
        cout << res <<endl;
    }
    return 0;
}