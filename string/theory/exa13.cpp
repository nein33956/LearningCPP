//chuyen doi xau thanh so
// stoi() - chuyen ve so int
// stoll() - chuyen ve so long long
// stod() - chuyen ve so double
// stof() - chuyen ve so float
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "1234";
    string s2 = "1000000000";
    string s3 = "100.123";
    int n1 = stoi(s1);
    long long n2 = stoll(s2);
    double n3 = stod(s3);
    cout << n1 <<" "<< n2 <<" "<< n3;
    return 0;
}