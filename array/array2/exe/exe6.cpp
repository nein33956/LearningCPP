//hoan vi 2 hang
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, a[100][100]; cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int h, k; cin >> h >> k;
    for(int i = 0; i < m; i++){
        swap(a[h][i], a[k][i]);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}