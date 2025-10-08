#include <iostream>
#include <string>
using namespace std;

int main() {
    const int jmhs = 5;  
    const int jmatkul = 3; 
    string nama[jmhs];
    float nilai[jmhs][jmatkul];
    float rata[jmhs];
    int indeksTerbaik = 0;

    for (int i = 0; i < jmhs; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << " : ";
        cin >> nama[i];
        float total = 0;
        for (int j = 0; j < jmatkul; j++) {
            cout << "  Nilai mata kuliah ke-" << j + 1 << " : ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
        rata[i] = total / jmatkul;
        cout << endl;
    }

    for (int i = 1; i < jmhs; i++) {
        if (rata[i] > rata[indeksTerbaik]) {
            indeksTerbaik = i;
        }
    }

    cout << "\n----------------------------------------------------------\n";
    cout << "Nama\t\tNilai1\tNilai2\tNilai3\tRata-rata\tKeterangan\n";
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < jmhs; i++) {
        cout << nama[i] << "\t\t";
        for (int j = 0; j < jmatkul; j++) {
            cout << nilai[i][j] << "\t";
        }
        cout << rata[i] << "\t\t";
        if (i == indeksTerbaik)
            cout << "<-- Terbaik";
        cout << endl;
    }
    cout << "----------------------------------------------------------\n";

    cout << "\nMahasiswa dengan rata-rata tertinggi adalah: " 
         << nama[indeksTerbaik] 
         << " dengan nilai rata-rata " << rata[indeksTerbaik] << endl;

    return 0;
}
