//nhap vao thang in ra so ngay trong thang
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        switch(n){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                cout << "Thang co 31 ngay!\n";
                break;
            case 4: case 6: case 9: case 11:
                cout << "Thang co 30 ngay!\n";
                break;
            case 2:
                cout << "Thang co 28 hoac 29 ngay!\n";
                break;
            default:
                cout << "Khong hop le!\n";
        }
    }
    system("pause");
    return 0;
}