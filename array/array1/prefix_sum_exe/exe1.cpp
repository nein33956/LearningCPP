//truy van tong tren mang tu l toi r
//do phuc tap O(n)
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout << "a["<<i<<"]: ";
        cin >> a[i];
    }
    int t; 
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for(int i = l; i <= r; i++){
            sum += a[i];
        }
        cout << sum <<endl;
    }
    system("pause");
    return 0;
}
