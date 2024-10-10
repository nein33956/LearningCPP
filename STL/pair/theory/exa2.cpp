//vi du khai bao pair
#include <iostream>
#include <utility>
#include<windows.h>

using namespace std;

int main(){
	pair<int, char> PAIR1;
	pair<string, double> PAIR2("GeeksForGeeks", 1.23);
	pair<string, double> PAIR3;

	PAIR1.first = 100;
	PAIR1.second = 'G';
	PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);

	cout << PAIR1.first <<" "<< PAIR1.second << endl;
	cout << PAIR2.first <<" "<< PAIR2.second << endl;
	cout << PAIR3.first <<" "<< PAIR3.second << endl;

    system("pause");
	return 0;
}
