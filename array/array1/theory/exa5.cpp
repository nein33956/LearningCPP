// Tính tổng các phần tử có giá trị âm trong mảng
#include<bits/stdc++.h>
using namespace std;

int tong_am(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0)
            sum += a[i];
    }
    return sum;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << tong_am(a, n) <<endl;
    system("pause");
    return 0;
}