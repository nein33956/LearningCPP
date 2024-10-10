//in ra ki tu in thuong ke tiep cua ki tu do
//neu ki tu khong phai la chu cai thi in ra no
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        if(c == 90 || c == 122)
            cout << "a" <<endl;
        else{
            if(c >= 65 && c < 90)
                c += 32;
            ++c;
            cout << c <<endl; 
        }  
    }else cout << "No!" <<endl;
    system("pause");
    return 0;
}