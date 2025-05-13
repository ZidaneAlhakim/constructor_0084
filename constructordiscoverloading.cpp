#include <iostream>
using namespace std;

class mahasiswa 
{
private: 
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int inim, string inama);
    void cetak();
};

mahasiswa::mahasiswa() {}

mahasiswa::mahasiswa(int inim)
{
    nim = inim; //definisi hanya nim
}

mahasiswa::mahasiswa(string inama)
{
    nama = inama; //definisi hanya nama
}

mahasiswa::mahasiswa(int inim, string inama)
{
    nim = inim;
    nama = inama; // definisi hanya nim nama
}

void mahasiswa::cetak()
{
    cout << endl << "nim = " << endl;
    cout << "nama = " << nama << endl;
}

int main() 
{
    mahasiswa mhs1(202401);           // hanya nim
    mahasiswa mhs2("Zidane");         // hanya nama
    mahasiswa mhs3(202401, "Zidane"); // nim dan nama

    //tampilkan nilai
    cout << "mahasiswa 1 : "; mhs1.cetak();
    cout << "mahasiswa 2 : "; mhs2.cetak();
    cout << "mahasiswa 3 : "; mhs3.cetak();

    return 0;
}