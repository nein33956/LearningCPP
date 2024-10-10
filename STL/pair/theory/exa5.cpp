//swap 2 pair a.swap(b);
#include<iostream>
#include<utility>
#include<windows.h>

using namespace std;

int main(){
    pair<int, int> a = {10, 20};
    pair<int, int> b = {9, 111};
    cout <<"Ban dau: \n";
    cout <<"a = {" << a.first <<", "<< a.second <<"}"<<endl;
    cout <<"b = {" << b.first <<", "<< b.second <<"}"<<endl;
    a.swap(b);
    cout <<"Sau khi swap: \n";
    cout <<"a = {" << a.first <<", "<< a.second <<"}"<<endl;
    cout <<"b = {" << b.first <<", "<< b.second <<"}"<<endl;
    system("pause");
    return 0;
}
