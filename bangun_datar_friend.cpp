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
    
}