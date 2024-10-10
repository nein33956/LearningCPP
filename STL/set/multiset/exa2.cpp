//bai toan siding window:cho mang co n phan tu va so nguyen k,
//doi voi moi day con lien tiep co do dai k thi in ra phan tu lon nhat cua moi day con do
/* input: 10 3                  output: 
          1 2 3 1 4 5 1 8 9 10         3 3 4 5 5 8 9 10*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    //khoi tao n la so phan tu
    //khoi tao k la do dai day con
    int n, k;
    cin >> n >> k;
    //khai bao mang a co n phan tu
    int a[n];
    //nhap phan tu va luu vao mang a
    for(int &x : a){
        cin >> x;
    }
    //khoi tao multiset de luu day con
    multiset<int> ms;
    //them k phan tu dau tien vao multiset
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    //in ra phan tu lon nhat trong ba phan tu dau tien
    //loai bo phan tu dau tien
    //them vao mot phan tu o vi tri i
    //i = 3
    //day con ban dau {1, 2, 3}
    //in ra phan tu co gia tri la 3
    //loai bo phan tu dau tien sau do them vao phan tu o vi tri i = 3
    //day con tiep theo la {2, 3, 1} => {1, 2, 3}
    for(int i = k; i < n; i++){
        cout << *ms.rbegin() <<" ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() <<endl;
    system("pause");
    return 0;
}