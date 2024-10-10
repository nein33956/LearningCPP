// Tính tổng các phần tử trong mảng
#include<bits/stdc++.h>
using namespace std;

int tong(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << tong(a, n) <<endl;
    system("pause");
    return 0;
}   