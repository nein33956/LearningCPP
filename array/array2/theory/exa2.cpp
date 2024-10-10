//nhap xuat mang ki tu
#include<iostream>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    char c[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> c[i][j];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}