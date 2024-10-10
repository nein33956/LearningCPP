// vi du ve khai bao va truy xuat cua set
// C++ program to demonstrate various functions of
// STL
#include <iostream>
#include <windows.h>
#include <set>
using namespace std;

int main(){
	set<int, greater<int> > s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	s1.insert(50);
	s1.insert(10);
	cout << s1.size() <<endl;
    for(auto i : s1){
        cout << i << " ";
    }
    cout<<endl;
    system("pause");
	return 0;
}
