//buatlah program c++ dengan class yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki constructor berparameter
//untuk mengisi nilai namaBarang dan kodeBarang
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
using namespace std;

class barang 
{
public:
    int kodeBarang;
    string namaBarang;

    barang(int, string);
    void cetak();
};

barang::barang (int AHkodeBarang, string AHnamaBarang)
{
    kodeBarang = AHkodeBarang;
    namaBarang = AHnamaBarang;
}

void barang::cetak ()
{
    cout << endl << "kodeBarang = " << kodeBarang << endl;
    cout << "namaBarang =  " << namaBarang << endl;
}


int main()
{
    barang ZDN(99039, "Sulthan");
    
    cout << "barang : "; ZDN.cetak();
    return 0;
}
