//tach tu trong xau neu co mot ki tu dac biet
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "vo.le.thanh";
    //Khai báo stringstream ss và gán cho nó nội dung của s
    stringstream ss(s);
    string word;
    while(getline(ss, word, '.')){
        cout << word <<endl;
    }
    return 0;
}