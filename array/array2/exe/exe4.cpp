//tim hang co nhieu so nguyen to nhat
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

int row_prime(int a[][100], int m, int n){
    //khoi tao bien res de luu ki luc co bao nhieu so nguyen to
    //khoi tao hang co nhieu so nguyen to nhat la hang 1
    int res = 0, row = 1;
    for(int i = 0; i < m; i++){
        //khoi tao bien cnt de dem so nguyen to trong hang
        int count = 0;
        for(int j = 0; j < n; j++){
            if(prime(a[i][j]))
                ++count;
        }
        if(count > res){ //count >= res neu muon hang co chi so lon hon
            res = count;
            row = i + 1;
        }
    }
    cout << row <<endl;
    cout << res <<endl;
}

int main(){
    int m, n, a[100][100]; cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    row_prime(a, m, n);
    return 0;
}