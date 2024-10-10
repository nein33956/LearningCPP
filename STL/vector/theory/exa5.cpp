// thay doi kich thuoc vector bang ham resize
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int main(){
    vector<int> n = {1, 2, 3, 4, 5, 6};
    n.resize(10);
    for(int i = 0; i < n.size(); i++){
        cout << n[i] <<" ";
    }
    cout <<endl;
    system("pause");
    return 0;
}