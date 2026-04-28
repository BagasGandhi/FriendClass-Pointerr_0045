#include <iostream>
using namespace std;

class BelahKetupat;

class LayangLayang
{
private:
    float diagonal1, diagonal2;
    float sisiPendek, sisiPanjang;

public:
    void input();
    float luas();
    float keliling();
    void output();   
    
    friend float BelahKetupat::kelilingLayangLayang(LayangLayang &x);
};

class BelahKetupat
{
private:
    float diagonal1, diagonal2;
    float sisi;  
    
public:
    void input();
    float luas();
    float keliling();
    void output();

    float kelilingLayangLayang(LayangLayang &x);
};

void LayangLayang::input()
{
    cout << "=== Input Layang-Layang ===" << endl;
    cout << "Masukkan diagonal 1: ";
    cin >> diagonal1;
    cout << "Masukkan diagonal 2: ";
    cin >> diagonal2;
    cout << "Masukkan sisi pendek: ";
    cin >> sisiPendek;
    cout << "Masukkan sisi panjang: ";
    cin >> sisiPanjang;    
}

float LayangLayang::luas()
{
    return 0.5 * diagonal1 * diagonal2;
}

float LayangLayang::keliling()
{
    return 2 * (sisiPendek + sisiPanjang);
}

void LayangLayang::output()
{
    cout << "\n=== Output Layang-Layang ===" << endl;
    cout << "Luas     : " << luas() << endl;
    cout << "Keliling : " << keliling() << endl;
}

void BelahKetupat::input()
{
    cout << "\n=== Input Belah Ketupat ===" << endl;
    cout << "Masukkan diagonal 1: ";
    cin >> diagonal1;
    cout << "Masukkan diagonal 2: ";
    cin >> diagonal2;
    cout << "Masukkan sisi: ";
    cin >> sisi;
}

float BelahKetupat::luas()
{
    return 0.5 * diagonal1 * diagonal2;
}

float BelahKetupat::keliling()
{
    return 4 * sisi;
}