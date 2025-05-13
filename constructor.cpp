#include <iostream>
using namespace std;

class mahasiswa
{
public:
mahasiswa(); //constructor
};

mahasiswa::mahasiswa()
{
    cout <<"Constructor Terpanggil" << endl; //Definisi constructor
}

int main(){
    mahasiswa mhs; //pembuatan objek

    return 0;
}