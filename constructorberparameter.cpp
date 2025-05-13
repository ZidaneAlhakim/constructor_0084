#include <iostream>
using namespace std;

class mahasiswa
{
public:
    mahasiswa(int nim, string nama); //constructor dengan parameter

};

//definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) 
{
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM     :" << nim << endl;
    cout << "nama    :" << nama << endl; 
}

