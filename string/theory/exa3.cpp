//xu li troi lenh
//getline() doc xau den khi gap enter la dung
//truoc getline() co cin thi se bi thua dau enter
//va dau enter do se bi getline() doc
//su dung ham cin.ignore() truoc getline() khi co cin dung truoc

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    cout << s <<endl;
    system("pause");
    return 0;
}