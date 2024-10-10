//truy van tinh tong cac phan tu duoc gioi han boi han va cot
//do phuc tap O(n^2)
#include<iostream>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    int a[m+1][n+1];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] <<" ";
        }
        cout <<endl;
    }
    int t; cin >> t;
    while(t--){
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        int sum = 0;
        for(int i = h1; i <= h2; i++){
            for(int j = c1; j <= c2; j++)
                sum += a[i][j];
        }
        cout << sum <<endl;
    }
    return 0;
}