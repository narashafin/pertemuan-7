#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "selamat datang" << endl;
    while (true) { //perulangan
    cout << "silahkan masukkan jumlah elemen array: "; //memasukkan input
    cin >> n;


    int array[n];

    cout << "Silahkan masukkan nilai untuk setiap elemen array" << endl;
    for (int i = 0; i < n; i++){
        cout << "Bilangan ke - " << (i + 1) << ": " ;
        cin >> array[i];
    }

    //Mencari nilai tertinggi dalam array
    int nilaiTertinggi = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > nilaiTertinggi) {
            nilaiTertinggi = array[i];
        }
    }
    cout << "Nilai tertinggi dalam array adalah: " << nilaiTertinggi << endl;


    int CariAngka;
    cout << "\n";
    cout << "silahkan masukkan angka yang ingin dicari: ";
    cin >> CariAngka;

    //Mencari angka dalam array dan menampilkan indeksnya
    bool ditemukan = false;
    for (int i = 0; i < n; i++) {
        if (array[i] == CariAngka) {
            cout << "Angka " << CariAngka << " ditemukan pada indeks ke -" << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << CariAngka << " tidak ditemukan dalam array." << endl;
    }
    }

    return 0;
}
