//tìm phần tử lớn nhất trong ma trận và liệt kê vị trí của nó
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        int a[500][500];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        int max_val = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++)
                max_val = max(max_val, a[i][j]);
        }
        cout << max_val <<endl;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(max_val == a[i][j]){
                    cout <<"Vi tri xuat hien: A[" << i + 1 <<"][" << j + 1 <<"]\n";
                }
            }
        }
    }
    system("pause");
    return 0;
}