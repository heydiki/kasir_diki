
#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    int harga, total, bayar, kembalian;

    cout << "==============================" << endl;
    cout << "       KASIR WARUNG MAKAN     " << endl;
    cout << "==============================" << endl;

    cout << "Menu Makanan:" << endl;
    cout << "1. Soto  : Rp 10.000" << endl;
    cout << "2. Rawon : Rp 20.000" << endl;

    cout << "------------------------------" << endl;
    cout << "Pilih Menu (1/2): ";
    cin >> pilihan;

    cout << "Jumlah Pesanan: ";
    cin >> jumlah;

    if (pilihan == 1) {
        harga = 10000;
        cout << "Menu Dipilih: Soto" << endl;
    }
    else if (pilihan == 2) {
        harga = 20000;
        cout << "Menu Dipilih: Rawon" << endl;
    }
    else {
        cout << "Pilihan tidak tersedia!" << endl;
        return 0;
    }

    total = harga * jumlah;

    cout << "------------------------------" << endl;
    cout << "Total Harga : Rp " << total << endl;

    cout << "Uang Bayar  : Rp ";
    cin >> bayar;

    if (bayar >= total) {
        kembalian = bayar - total;

        cout << "Kembalian   : Rp " << kembalian << endl;
        cout << "------------------------------" << endl;
        cout << "Terima kasih sudah membeli!" << endl;
    }
    else {
        cout << "Uang pembayaran kurang!" << endl;
    }

    return 0;
}
