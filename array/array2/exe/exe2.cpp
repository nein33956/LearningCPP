//liet ke so fibonaci trong mang 2 chieu
#include<bits/stdc++.h>
using namespace std;

bool fibo(long long n){
    long long F[100];
    F[0] = 0; F[1] = 1;
    for(int i = 2; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    for(int i = 0; i <= 92; i++){
        if(n == F[i])
            return true;
    }
    return false;
}

int main(){
    int m, n; cin >> m >> n;
    long long a[100][100];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(fibo(a[i][j]))
                cout << a[i][j] <<" ";
        }
    }
    return 0;
}