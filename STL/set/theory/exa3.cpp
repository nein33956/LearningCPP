//Cac phan tu sx tang dan tuy nhien cung co the sap xep giam dan

#include <iostream>
#include <set>
#include<windows.h>
using namespace std;

int main(){
	set<int, greater<int> > s1; //cu phap sap xep
	s1.insert(10);
	s1.insert(5);
	s1.insert(12);
	s1.insert(4);
	for (auto i : s1) {
		cout << i << ' ';
	}
    cout <<endl;
    system("pause");
	return 0;
}
