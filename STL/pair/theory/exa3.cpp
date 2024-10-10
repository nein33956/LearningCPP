//pair long nhau
#include<iostream>
#include<utility>
#include<windows.h>

using namespace std;

int main(){
    pair<int, pair<int, char>> a = make_pair(10, make_pair(11, 'a'));
    cout << a.first <<" "<< a.second.first <<" "<< a.second.second <<endl;
    pair< pair<int, int>, pair<int, int> > b{{13, 154}, {14, 15}};
    cout << b.first.first <<" "<< b.first.second <<" "<< b.second.first <<" "<< b.second.second <<endl;

    system("pause");
    return 0;
}
