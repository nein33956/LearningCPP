#include<bits/stdc++.h>
using namespace std;
int main(){
    int m = 3, n = 3;
    int a[3][3];
    for(int i = 0; i < m; i++){
        for(int j = 0; j< n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}