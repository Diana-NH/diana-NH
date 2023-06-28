#include <iostream>

using namespace std;

main(){
    long *B;
    long A;
 
 //Melakukan alokasi memori
    B=&A;

    A=20; 

//memasukkan nilai variabel A yaitu 20 ke dalam variabel//
    cout<<"Nilai A  : "<<A<<endl;
    cout<<"Nilai *B : "<<*B<<endl;
    cout<<"Nilai B  : "<<B<<endl;
    cout<<"Nilai &A : "<<&A<<endl;

//Menggunakan memori yang telah dialokasikan
    *B=170; 
    
    //memasukkan nilai variabel B yaitu 170 ke dalam variabel//
    cout<<"Nilai A  : "<<A<<endl;
    cout<<"Nilai *B : "<<*B<<endl;
    cout<<"Nilai B  : "<<B<<endl;
    cout<<"Nilai &A : "<<&A<<endl;

    return 0;
}
