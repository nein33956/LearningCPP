//tim phan tu nho nhat va lon nhat trog mang 2 chieu
#include<bits/stdc++.h>
using namespace std;

int max_idx(int a[][100], int m, int n){
    int max = a[0][0];
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}

int min_idx(int a[][100], int m, int n){
    int min = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] < min)
                min = a[i][j];
        }
    }
    return min;
}

int main(){
    int m, n, a[100][100]; cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << max_idx(a, m, n) <<" "<< min_idx(a, m, n) <<endl;
    return 0;
}