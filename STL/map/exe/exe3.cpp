//cho danh sach cac tu, dem xem tu nao xuat hien nhieu nhat
/*input: 9                                                  output:
         python java string java python C++ sql sql java           java 3*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    //khai bao map de su dung key(tu) va value(tan suat)
    map<string, int> mp;
    int n;
    cin >> n; //nhap so tu cua day
    for(int i = 0; i < n; i++){
        //duyet cac phan tu va nhap vao cac tu
        string s;
        cin >> s;
        //tang value(tan suat) cua key(tu)
        mp[s]++;
    }
    //khoi tao bien de luu value(tan suat) lon nhat
    int max_fre = 0;
    //khoi bien de luu key(tu) co value(tan suat) lon nhat
    string res;
    for(auto i : mp){
        //neu value(tan suat) lon hon ki luc thi gan value cho ki luc
        if(i.second > max_fre){
            max_fre = i.second;
            //luu tu do vao key cua value lon nhat
            res = i.first;
        }
        //in ra key(tu) va value(tan suat lon nhat)
    }
    cout << res <<" "<< max_fre <<endl;
    system("pause");
    return 0;
}