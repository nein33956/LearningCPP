//dem so lan xuat hien cua cac phan tu trong mang
//sau do in ra cung voi so lan xuat hien cua chung
/*input: 8                   output:
         1 1 2 1 3 5 1 4            1 4
                                    2 1 
                                    3 1
                                    4 1
                                    5 1*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp; //khai bao map voi key va value
    int n;    //khai bao va nhap so luong phan tu
    cin >> n;
    for(int i = 0; i < n; i++){ //duyet vong lap tat ca cac phan tu thong qua chi so i
        int x;       //khai bao + nhap phan tu (key)
        cin >> x;
        mp[x]++;      //tang value cua key vua nhap
    }
    for(auto i : mp){
        //in ra key(first) va value(second)
        cout << i.first <<" "<< i.second <<endl;
    }
    system("pause");
    return 0; 
}

