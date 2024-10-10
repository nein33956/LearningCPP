//liet ke cac so nguyen to co trong ma tran
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int m, n, a[500][500]; cin >> m >> n;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        //khai báo map để kiểm tra số lần xuất hiện
        map<int, int> mp;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                //nếu phần tử là số nguyên tố và phần tử đó chưa xuất hiện thì in ra
                if(prime(a[i][j]) && mp[a[i][j]] == 0)
                    cout << a[i][j] <<" ";
                    //sau đó cho phần tử đấy đã xuất hiện để lần sau khỏi in
                    mp[a[i][j]] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}