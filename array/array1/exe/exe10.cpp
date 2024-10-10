//tim khoang cach nho nhat giua hai phan tu trong mang (khong am)
/*input: 2                            output:
         5
         2 4 5 7 9                          1
         10
         87 32 99 75 56 43 21 10 68 49      6*/
//sap xep cac phan tu theo thu tu tang dan sau do xet cac cap lien ke
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> se;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        //khoi tao bien res de luu ket qua khoang cach
        int res = INT_MAX;
        //duyet vong lap voi x la con tro
        //ban dau x se tro den phan tu dau tien va sau do tro den phan tu tiep theo
        for(auto x = se.begin(); next(x) != se.end(); x++){
            //tinh khoang cach giua phan tu hien tai va phan tu tiep theo
            int kc = abs(*next(x) - *x);
            //cap nhat res
            res = min(res, kc);
        }
        cout << res <<endl;
    }
    return 0;
}