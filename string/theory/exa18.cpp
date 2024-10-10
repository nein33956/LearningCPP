#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "28tech BLOG strING";
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout <<  s << endl;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s ;
    string a;
    getline(cin, a);
    transaction_safe_dynamic(a.begin(), a. end(), a.begin(), ::tolower);
    cout << a;
}