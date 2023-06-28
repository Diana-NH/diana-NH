#include <iostream>
using namespace std;

int main() {
    int nominal;

    cout << "Masukkan nominal uang: ";
    cin >> nominal;

    cout << "Anda memasukkan nominal uang: " << nominal << endl;

    // Membaca jumlah pecahan uang
    int ribuan = nominal / 1000;
    int sisaRibuan = nominal % 1000;
    int limaRatusan = sisaRibuan / 500;
    int sisaLimaRatusan = sisaRibuan % 500;
    int seratusan = sisaLimaRatusan / 100;
    int sisaSeratusan = sisaLimaRatusan % 100;
    int limapuluh = sisaSeratusan / 50;
    int sisalimapuluh = sisaSeratusan % 50;
    int sepuluh = sisalimapuluh / 10;
    int sisaSepuluh = sisalimapuluh % 10;
    int lima = sisaSepuluh / 5;
    int sisalima = sisaSepuluh % 5;
    int satu = sisalima / 1;

    // Menampilkan jumlah pecahan uang
    if (ribuan > 0) {
        cout << "Pecahan ribuan: " << ribuan << endl;
    }
    if (limaRatusan > 0) {
        cout << "Pecahan lima ratusan: " << limaRatusan << endl;
    }
    if (seratusan > 0) {
        cout << "Pecahan seratusan: " << seratusan << endl;
    }
    if (limapuluh > 0) {
        cout << "Pecahan lima puluh: " << limapuluh << endl;
    }
    if (sepuluh > 0) {
        cout << "Pecahan sepuluh: " << sepuluh << endl;
    }
    if (lima > 0) {
        cout << "Pecahan lima: " << lima << endl;
    }
    if (satu > 0) {
        cout << "Pecahan satu: " << satu << endl;
    }

    return 0;
}

