#include <iostream>

using namespace std;
int datake=1;
int maksimal = 6;

struct paket{
    char jenis_barang[30];
    int berat_barang;
    char kota_tujuan[30];
};

struct paket kirim[5];

bool isFull()
{
    if(datake == maksimal){
        return true;
    }else{
        return false;
    }
}

bool isEmpty()
{
    if(datake == 1){
        return true;
    }else{
        return false;
    }
}

void pushArray(int x){
    if(isFull()){
        cout << "Data penuh" << endl;
        cout << "------------------" << endl;
    }else{
        cout << "Masukkan Jenis Barang = ";
        cin >> kirim[x].jenis_barang;
        cout << "Masukkan Berat Barang = ";
        cin >> kirim[x].berat_barang;
        cout << "Masukkan Kota Tujuan= ";
        cin >> kirim[x].kota_tujuan;
        cout << "----------------------" << endl;
    }
}

void displayPaket(int x){
    cout << "Data yang diinputkan" << endl;
    for(int a=1; a<x; a++){
        cout << a << " ";
        cout << kirim[a].jenis_barang << " ";
        cout << kirim[a].berat_barang << " ";
        cout << kirim[a].kota_tujuan << endl;
    }
    cout << "-----------------------------" << endl;
}

void popPaket(int x)
{
    if(isEmpty()){
        cout << "Data Kosong" << endl;
    }else{
        datake--;
    }
}

int main()
{
    int pilih;
    do{
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampil Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Cek isi Data (Apakah Full ?)" << endl;
        cout << "5. Cek isi Data (Apakah Kosong ?)" << endl;
        cout << "9. Keluar" << endl;
        cout << "Pilihan anda (1-9) : ";
        cin >> pilih;
        cout << "----------------------------" << endl;
        if(pilih == 1){
            pushArray(datake);
            datake++;
        }if(pilih == 2){
            displayPaket(datake);
        }if(pilih == 3){
            popPaket(datake);
        }if(pilih == 4){
            cout << "Apakah data full ?? " << isFull() << endl;
            cout << "--------------------------" << endl;
        }if(pilih == 5){
            cout << "Apakah data kosong ?? " << isEmpty() << endl;
            cout << "--------------------------" << endl;
        }
    }while(pilih != 9);{

    }

    return 0;
}
