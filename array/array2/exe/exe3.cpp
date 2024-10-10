//tinh tong hang va cot cua ma tran
#include<bits/stdc++.h>
using namespace std;

int sum_row(int a[][100], int m, int n){
    for(int i = 0; i < m; i++){
        int tong = 0;
        for(int j = 0; j < n; j++)
            tong += a[i][j];
    cout << tong <<" ";
    }
}

int sum_column(int a[][100], int m, int n){
    for(int i = 0; i < m; i++){
        int tong = 0;
        for(int j = 0; j < n; j++){
            tong += a[j][i];
        }
    cout << tong <<" ";
    }
}

int main(){
    int m, n, a[100][100];
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    sum_row(a, m, n);
    cout <<endl;
    sum_column(a, m, n);
    return 0;
}