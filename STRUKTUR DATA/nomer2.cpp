#include <iostream>
#include <string>
using namespace std;

string konversiTulisan(int n) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", 
                       "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", 
                        "empat belas", "lima belas", "enam belas", 
                        "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", 
                        "lima puluh", "enam puluh", "tujuh puluh", 
                        "delapan puluh", "sembilan puluh"};

    if (n == 0) return "nol";
    if (n == 100) return "seratus";
    if (n < 10) return satuan[n];
    if (n < 20) return belasan[n - 10];
    return puluhan[n / 10] + (n % 10 != 0 ? " " + satuan[n % 10] : "");
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Input harus antara 0 - 100" << endl;
    } else {
        cout << angka << " : " << konversiTulisan(angka) << endl;
    }

    return 0;
}
