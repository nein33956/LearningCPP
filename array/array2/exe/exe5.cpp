//tim cot co so luong so nguyen to nhiue nhat
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int prime_column(int a[][100], int m, int n){
    int res = 0, column = -1;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < m; j++){
            if(prime(a[j][i]))
                ++count;
        }
        if(count > res){
            res = count;
            column = i + 1;
        }
    }
    cout << column <<endl;
    cout << res <<endl;
}

int main(){
    int m, n, a[100][100]; cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++)
            cin >> a[i][j];
    }
    prime_column(a, m, n);
    return 0;
}