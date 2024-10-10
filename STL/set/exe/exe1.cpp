//dòng đầu tiên là số lượng testcase
//mỗi testcase gồm 2 dòng, dòng đầu tiên là số phần tử của mảng
//dòng thứ 2 bao gồm n phần tử của mảng
//in ra số lượng phần tử khác nhau của mảng
/*input: 2                output:
         5
         1 2 2 2 1               2
         4
         1 2 3 4                 4*/
        
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        cout << s.size() <<endl;
    }
    system("pause");
    return 0;
}
//ban chat set chi cho phep luu cac phan tu khac nhau nen chi can in size cua no la duoc