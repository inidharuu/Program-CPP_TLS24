#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int p;
    float hasil1, hasil2, a, b, c;

    cout << "KALKULATOR PHYTAGORAS" << endl;
    cout << "=====================" << endl << endl;
    cout << "Pilih program : " << endl;
    cout << "1. Mencari panjang sumbu miring" << endl;
    cout << "2. Mencari panjang sumbu tegak" << endl;
    cout << "===> ";
    cin >> p;
    if (p == 1)
    {
        cout << "Masukkan panjang sisi siku a : ";
        cin >> a;
        cout << "Masukkan panjang sisi siku b : ";
        cin >> b;
        hasil1 = sqrt(a*a + b*b);
        cout << "Hasilnya : " << hasil1;
    } else if (p == 2)
    {
        cout << "Masukkan panjang sisi miring : ";
        cin >> c;
        cout << "Masukkan panjang sisi siku-siku : ";
        cin >> a;
        hasil2 = sqrt(c*c - a*a);
        cout << "Hasilnya : " << hasil2;
    } else{
        cout << "Program tidak ditemukan" << endl;
    }

    cin.get();
    return 0;
}
