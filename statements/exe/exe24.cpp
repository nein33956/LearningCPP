//kiem tra tam giac nhap vao la tam giac gi
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a > 0 && b > 0 && c > 0) && (a + b > c && a + c > b && b + c > a)){
        if(a == b == c){
            cout << "Tam giac deu!" <<endl;
        }else if(a == c || a == b || b == c){
            if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
                cout << "Tam giac vuong can!" <<endl;
            cout << "Tam giac can!" <<endl;
        }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            cout << "Tam giac vuong!" <<endl;
        }else cout << "Tam giac thuong!" <<endl;
    }else cout << "Khong hop le!" <<endl;
    system("pause");
    return 0;
}