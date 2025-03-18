#include <iostream>
#include <iomanip>

#define HARGA_PERTALITE 7000
#define HARGA_PERTAMAX 9000

using namespace std;

void cetakStruk(string nama, string jenis, int liter, int total) {
    cout << "====================================\n";
    cout << "            STRUK PEMBELIAN         \n";
    cout << "====================================\n";
    cout << "Nama Pelanggan : " << nama << "\n";
    cout << "Jenis Bensin   : " << jenis << "\n";
    cout << "Jumlah Liter   : " << liter << " L\n";
    cout << "Total Harga    : Rp. " << total << "\n";
    cout << "====================================\n";
}

int main() {
    string nama, jenisBensin;
    int pilihan, liter, total;

    cout << "Masukkan Nama Pelanggan: ";
    cin >> nama;
    
    cout << "Pilih jenis bensin:\n";
    cout << "1. Pertalite (Rp. 7000/L)\n";
    cout << "2. Pertamax (Rp. 9000/L)\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;
    
    cout << "Masukkan jumlah liter: ";
    cin >> liter;
    
    if (pilihan == 1) {
        total = liter * HARGA_PERTALITE;
        jenisBensin = "Pertalite";
    } else if (pilihan == 2) {
        total = liter * HARGA_PERTAMAX;
        jenisBensin = "Pertamax";
    } else {
        cout << "Pilihan tidak valid!\n";
        return 1;
    }
    
    cetakStruk(nama, jenisBensin, liter, total);
    
    return 0;
}
