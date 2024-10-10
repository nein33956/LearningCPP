//tim cot co nhieu so fibo nhat, trong truong hop co cung so fibo
//thi in ra cot co tong so fibo lon nhat
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
//khởi tạo mảng fibo để chưa các số fibo
set<ll> fibo;
void init(){
    //khởi tạo mảng F để tạo ra các số fibonaci và lưu vào tập fibo
    ll F[93];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++)
        F[i] = F[i - 1] + F[i - 2];
    for(int i = 0; i <= 92; i++)
        fibo.insert(F[i]);
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        ll a[500][500];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        //khởi tạo biến ans để lưu số lượng số fibo trong cột lớn nhất(kỉ lục)
        //biến cot để lưu cột tương ứng với biến ans
        //biến sum để lưu tổng số fibo trong cột đó
        int ans = -1, cot;
        ll sum = 0;
        //duyệt từng cột
        for(int i = 0; i < n; i++){
            //biến tmp để lưu tổng số fibo trong cột đang xét
            //biến dem để đếm số lượng số fibo trong cột
            ll tmp = 0;
            int dem = 0;
            //duyệt từng hàng của cột
            for(int j = 0; j < m; j++){
                //nếu phần tử đang xét thuộc tập fibo
                if(fibo.count(a[j][i]) == 1){
                    //tăng biến đếm lên
                    ++dem;
                    //cộng giá trị của phần tử đó vào tmp
                    tmp += a[j][i];
                }
            }
            //nếu biến đếm lơn hơn kỉ lục
            if(dem > ans){
                cot = i;
                ans = dem;
                sum = tmp;
            }else if(dem == ans){
                if(sum < tmp){
                    cot = i;
                    sum = tmp;
                }
            }
        }
        cout << cot + 1 <<endl;
        for(int i = 0; i < m; i++){
            if(fibo.count(a[i][cot]) == 1)
                cout << a[i][cot] << " ";
        }
        cout << endl;
    }
    return 0;
}