// tuple
// get<idx>(name_tuple)
// make_pair(..., ..., ...);
#include<iostream>
#include<tuple> // for tuple
#include<windows.h>

using namespace std;

int main(){
	tuple <char, int, float> geek;
	geek = make_tuple('a', 10, 15.5);
	cout << "The initial values of tuple are : ";
	cout << get<0>(geek) << " " << get<1>(geek);
	cout << " " << get<2>(geek) << endl;
	get<0>(geek) = 'b';
	get<2>(geek) = 20.5;
	cout << "The modified values of tuple are : ";
	cout << get<0>(geek) << " " << get<1>(geek);
	cout << " " << get<2>(geek) << endl;
    system("pause");
	return 0;
}
