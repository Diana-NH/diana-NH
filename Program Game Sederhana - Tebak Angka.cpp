#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int secretNumber, guess; // Variabel untuk menyimpan angka rahasia dan tebakan pemain
    char playAgain; // Variabel untuk menyimpan opsi apakah pemain ingin bermain lagi atau tidak

    std::cout << "=========================================\n";
	std::cout << "Selamat datang di permainan Tebak Angka!" << std::endl;
	std::cout << "=========================================\n";

    do {
        // Menghasilkan angka acak antara 1 hingga 10
        srand(time(0)); // Menginisialisasi seed untuk angka acak berdasarkan waktu saat ini
        secretNumber = rand() % 10 + 1;

        std::cout << "Silahkan Pilih Angka 1 Sampai 10. Coba tebak angkanya!" << std::endl;

        int tries = 0; // Variabel untuk menghitung jumlah tebakan yang telah dilakukan
        bool guessed = false; // Variabel boolean untuk menandai apakah angka sudah berhasil ditebak atau belum

        while (!guessed) {
            std::cout << "Masukkan tebakan Anda: ";
            std::cin >> guess;
            std::cout << "-------------------------------------\n";

            tries++;

            if (guess == secretNumber) {
            	std::cout << "<===============================================================>\n ";
                std::cout << "Selamat! Anda berhasil menebak angka tersebut dengan benar dalam " << tries << " tebakan." << std::endl;
                guessed = true;
            } else if (guess < secretNumber) {
                std::cout << "Tebakan Anda terlalu rendah. Coba lagi!" << std::endl;
            } else {
                std::cout << "Tebakan Anda terlalu tinggi. Coba lagi!" << std::endl;
            }
        }

        std::cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Terima kasih telah bermain!" << std::endl;

    return 0;
}

