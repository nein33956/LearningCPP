#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        int ma;
        string ten;
        string ngaySinh;
        SinhVien(int ma, string ten, string ngaySinh){
            this->ma = ma;
            this->ten = ten;
            this->ngaySinh = ngaySinh;
        }
};

void interchangeSort(vector<SinhVien>& sv){
    int n = sv.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            if (sv[i].ten > sv[j].ten) swap(sv[i], sv[j]);
            else if(sv[i].ten == sv[j].ten){
                if(sv[i].ngaySinh < sv[j].ngaySinh) 
                    swap(sv[i], sv[j]);
            }
        }
    }
}

void printSinhVien(const vector<SinhVien>& sv){
    for(const auto& s : sv) 
        cout << "Ma: " << s.ma << ", Ten: " << s.ten << ", Ngay Sinh: " << s.ngaySinh << endl;
    
}

int main(){
    vector<SinhVien> svList = {
        {1, "Kevin De Bruyne", "1991-06-28"},
        {2, "Neymar Junior", "1992-02-5"},
        {3, "Kevin De Bruyne", "1991-06-27"},
        {4, "Eden Hazard", "1991-01-07"}
    };

    cout << "Danh sach truoc khi sap xep:\n";
    printSinhVien(svList);

    interchangeSort(svList);

    cout << "\nDanh sach sau khi sap xep:\n";
    printSinhVien(svList);
    system("pause");
    return 0;
}
