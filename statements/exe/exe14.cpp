//in ra so ngay trong thang
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    switch(t){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout <<"Thang co 31 ngay!"<<endl;
            break;
        case 4: case 6: case 9: case 11:
            cout <<"Thang co 30 ngay!"<<endl;
            break;
        case 2:
            if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
                cout << "Thang co 29 ngay!" <<endl;
            else cout << "Thang co 28 ngay!"<<endl;
            break;
        default: 
            cout<<"Du lieu khon hop le!"<<endl;
    }
    system("pause");
    return 0;
}