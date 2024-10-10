#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	long long n = 999999999999999999;
	for (long long i = 1; i < n; i *= 11){
		cout << i << endl;
	}
	system("pause");
	return 0;
}