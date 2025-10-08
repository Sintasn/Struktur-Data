#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    mhs.nama = "Sinta";
    mhs.NIM = "103112430047";

    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.NIM;
}
