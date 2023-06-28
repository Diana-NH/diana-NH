#include <iostream>
#include <string>
using namespace std;
 // mendeklarasikan struct nama mahasiswa,nama dan jurusan bertipe string,ipk bertipe float//
struct mahasiswa{
    string nama;
    string jurusan;
    float ipk;
};
 
int main(){
 
 // mendeklarasikan variable struct mhs bertipe mahasiswa,variable digunakan untuk menyimpan data mahasiswa//
    mahasiswa mhs;
 //pengisian nilai variable//
    mhs.nama="diana nur haliza";
    mhs.jurusan="Teknik Informatika";
    mhs.ipk=3,10;
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"................."<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl;
      
    return 0;
}
