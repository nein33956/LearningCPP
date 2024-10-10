//mang 2 chieu va ham
#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}
int dem(int a[][100], int m, int n){
    int ans = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(Prime(a[i][j]))
                ++ans;
        }
    }
    return ans;
}
int main(){
    int m, n, a[100][100]; cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << dem(a, m, n);
    return 0;
}