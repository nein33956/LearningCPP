#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits>

using namespace std;
 
struct NGAYTHANG {
    int ngay;
    int thang;
    int nam;
};
struct SV {
    char masv[12];
    char hodem[30];
    char ten[10];
    NGAYTHANG ngsinh;
    char gioitinh[4];
    char hokhau[20];
    float diem;
};
void Nhapsv(SV *sv) {
    cin.ignore(256, 'n');
    cout << "tMa sv: ";
    scanf(" %[^n]s", sv->masv);
    cout << "tHo dem: ";
    scanf(" %[^n]s", sv->hodem);
    cout << "tTen: ";
    scanf(" %[^n]s", sv->ten);
    cout << "tNgay sinh: ";
    cin >> sv->ngsinh.ngay;
    cout << "tThang sinh: ";
    cin >> sv->ngsinh.thang;
    cout << "tNam sinh: ";
    cin >> sv->ngsinh.nam;
    cout << "tGioi tinh: ";
    scanf(" %[^n]s", sv->gioitinh);
    cout << "tHo khau: ";
    scanf(" %[^n]s", sv->hokhau);
    cout << "tDiem: ";
    cin >> sv->diem;
}
void Hienthisv(SV *sv) {
    cout << sv->masv;
    cout << "t" << sv->hodem;
    cout << " " << sv->ten;
    cout << "t" << sv->ngsinh.ngay;
    cout << "-" << sv->ngsinh.thang;
    cout << "-" << sv->ngsinh.nam;
    cout << "t" << sv->gioitinh;
    cout << "t" << sv->hokhau;
    cout << "t" << sv->diem;
}
void Nhapds(SV *p, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cua sv thu " << i + 1 << " :" << endl;
        Nhapsv(p + i);
    }
}
void Hienthids(SV *p, int n) {
    for (int i = 0; i < n; i++) {
        Hienthisv(p + i);
        cout << "n";
    }
}
void Sapxep(SV *p, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if ((p + i)->diem > (p + j)->diem) {
                SV tmp = * (p + j);
                *(p + j) = * (p + i);
                *(p + i) = tmp;
            }
    }
}
int main() {
    SV *p;
    int n;
    do {
        cout << "Nhap vao so sv: ";
        cin >> n;
    }
    while (n < 0 || n > 10);
    p = new SV[n];
    cout << "Nhap vao thong tin " << n << " sv: " << endl;
    Nhapds(p, n);
    cout << "Hien thi thong tin vua nhap: " << endl;
    Hienthids(p, n);
    cout << "nDanh sach sau khi sap xep la: " << endl;
    Sapxep(p, n);
    Hienthids(p, n);
    delete p;
    return 0;
}