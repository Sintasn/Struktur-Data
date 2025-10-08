#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen array: ";
    cin >> N;

    int *arr = new int[N]; 
    cout << "Masukkan " << N << " bilangan bulat:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> *(arr + i);
    }

    int jumlah = 0;
    int maksimum = *arr;
    int minimum = *arr;

    for (int i = 0; i < N; i++) {
        jumlah += *(arr + i);
        if (*(arr + i) > maksimum) maksimum = *(arr + i);
        if (*(arr + i) < minimum) minimum = *(arr + i);
    }

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Jumlah seluruh bilangan : " << jumlah << endl;
    cout << "Nilai maksimum          : " << maksimum << endl;
    cout << "Nilai minimum           : " << minimum << endl;

    delete[] arr;
    return 0;
}
