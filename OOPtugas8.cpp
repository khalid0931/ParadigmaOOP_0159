#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        
}; // batas class

int main(){
    Barang elektro;
    Barang nonelektro;

    // Mengisi data barang elektronik
    elektro.nama = "Laptop Lenovo";
    elektro.jumlah = 15;
    elektro.kategori = "Elektronik";
    elektro.tanggalProduksi = "2025-01-15";

    // Mengisi data barang non-elektronik
    nonelektro.nama = "Meja Kayu ";
    nonelektro.jumlah = 8;
    nonelektro.kategori = "Non-Elektronik";
    nonelektro.tanggalProduksi = "2024-11-20";

    mhs.printData();

}