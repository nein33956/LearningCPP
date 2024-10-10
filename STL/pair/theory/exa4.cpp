//so sanh 2 pair se so sanh gia tri first sau do so sanh gia tri second
#include<iostream>
#include<utility>
#include<windows.h>

using namespace std;

int main(){
    pair<int, int> a(10, 20);
    pair<int, int> b(10, 20);
    pair<int, int> c(25, 8);
    pair<int, int> d(100, 0);
    cout << boolalpha << (a == b) <<endl;
    cout << boolalpha << (a != b) <<endl;
    cout << boolalpha << (c > a) <<endl;
    cout << boolalpha << (d > b) <<endl;
    system("pause");
    return 0;
}