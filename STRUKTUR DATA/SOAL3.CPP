#include <iostream>
using namespace std;

float hitungRataRata(float nilai[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return total / n;
}

void cariMinMax(float nilai[], int n, float &min, float &max) {
    min = nilai[0];
    max = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > max)
            max = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    float nilai[N];
    for (int i = 0; i < N; i++) {
        cout << "Nilai ujian siswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    float rata = hitungRataRata(nilai, N);
    float min, max;
    cariMinMax(nilai, N, min, max);

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Rata-rata kelas : " << rata << endl;
    cout << "Nilai tertinggi : " << max << endl;
    cout << "Nilai terendah  : " << min << endl;

    return 0;
}
