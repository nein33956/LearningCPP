#include<bits/stdc++.h>
using namespace std;

//Hàm mục tiêu (Objective Function)
int hamMuctieu(vector<int>& gen){
    int tong = 0;
    for (int g : gen)
        tong += g;
    return tong;
}

//tạo quần thể ban đầu
vector<vector<int>> khoiTao_qt(int kich_thuoc_quan_the, int do_dai_chuoi_gen){
    vector<vector<int>> quanThe;
    for(int i = 0; i < kich_thuoc_quan_the; ++i){
        vector<int> gen;
        for(int j = 0; j < do_dai_chuoi_gen; ++j)
            gen.push_back(rand() % 2);
        quanThe.push_back(gen);
    }
    return quanThe;
}

// Hàm lai ghép (Crossover)
pair<vector<int>, vector<int>> lai_ghep(vector<int>& cha, vector<int>& me){
    int diem_chia = rand() % cha.size();
    vector<int> con1(cha.begin(), cha.begin() + diem_chia);
    con1.insert(con1.end(), me.begin() + diem_chia, me.end());
    vector<int> con2(me.begin(), me.begin() + diem_chia);
    con2.insert(con2.end(), cha.begin() + diem_chia, cha.end());
    return make_pair(con1, con2);
}

//Hàm đột biến (Mutation)
void dot_bien(vector<int>& gen, double ty_le_dot_bien){
    for (int i = 0; i < gen.size(); ++i){
        if ((double)rand() / RAND_MAX < ty_le_dot_bien)
            gen[i] = 1 - gen[i];
    }
}

//Thuật toán di truyền chính
vector<int> thuat_toan_di_truyen(int kich_thuoc_quan_the, int do_dai_chuoi_gen, int so_the_he, double ty_le_lai_ghep, double ty_le_dot_bien) {
    srand(time(NULL));
    vector<vector<int>> quanThe = khoiTao_qt(kich_thuoc_quan_the, do_dai_chuoi_gen);
    for(int the_he = 0; the_he < so_the_he; ++the_he){
        vector<int> do_fitness(kich_thuoc_quan_the);
        for(int i = 0; i < kich_thuoc_quan_the; ++i)
            do_fitness[i] = hamMuctieu(quanThe[i]);
        vector<vector<int>> quan_the_moi;
        for(int i = 0; i < kich_thuoc_quan_the; i += 2){
            int cha_index = rand() % kich_thuoc_quan_the;
            int me_index = rand() % kich_thuoc_quan_the;
            if((double)rand() / RAND_MAX < ty_le_lai_ghep){
                auto con = lai_ghep(quanThe[cha_index], quanThe[me_index]);
                dot_bien(con.first, ty_le_dot_bien);
                dot_bien(con.second, ty_le_dot_bien);
                quan_the_moi.push_back(con.first);
                quan_the_moi.push_back(con.second);
            }else{
                quan_the_moi.push_back(quanThe[cha_index]);
                quan_the_moi.push_back(quanThe[me_index]);
            }
        }
        quanThe = quan_the_moi;
    }
    vector<int> ca_nhan_tot_nhat = quanThe[0];
    int do_fitness_tot_nhat = hamMuctieu(ca_nhan_tot_nhat);
    for(int i = 1; i < kich_thuoc_quan_the; ++i){
        int do_fitness_hien_tai = hamMuctieu(quanThe[i]);
        if(do_fitness_hien_tai > do_fitness_tot_nhat){
            ca_nhan_tot_nhat = quanThe[i];
            do_fitness_tot_nhat = do_fitness_hien_tai;
        }
    }
    return ca_nhan_tot_nhat;
}

int main(){
    int kich_thuoc_quan_the = 50;
    int do_dai_chuoi_gen = 10;
    int so_the_he = 100;
    double ty_le_lai_ghep = 0.8;
    double ty_le_dot_bien = 0.01;

    vector<int> ca_nhan_tot_nhat = thuat_toan_di_truyen(kich_thuoc_quan_the, do_dai_chuoi_gen, so_the_he, ty_le_lai_ghep, ty_le_dot_bien);
    cout << "Giai phap tot nhat: ";
    for(int gen : ca_nhan_tot_nhat)
        cout << gen << " ";
    cout << endl;
    cout << "Do fitness: " << hamMuctieu(ca_nhan_tot_nhat) << endl;
    return 0;
}
