//so sanh 2 xau theo thu tu tu dien
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "abcd";
    string b = "efgh";
    if(a > b) cout << "Xau a lon hon xau b!" <<endl;
    else if(a < b) cout << "Xau a nho hon xau b!" <<endl;
    else if(a == b) cout << "Xau a bang xau b!" <<endl;
    return 0;
}