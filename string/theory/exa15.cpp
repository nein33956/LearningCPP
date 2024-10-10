//tach cac tu trong xau
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = " vo        le                       thanh";
    //Khai báo stringstream ss và gán cho nó nội dung của s
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout << word <<endl;
    }
    return 0;
}