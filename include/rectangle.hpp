#ifndef __PERSEGI_PANJANG_HPP__
#define __PERSEGI_PANJANG_HPP__
#include <iostream>

using namespace std;

class PersegiPanjang
{
private:
    float xmin, ymin, xmax, ymax;

public:
    PersegiPanjang(float TengahX, float TengahY, float panjang, float lebar);
    PersegiPanjang operator+ (PersegiPanjang const &);
    PersegiPanjang operator- (PersegiPanjang const &);
    float operator[](int menu_terpilih);
    void operator++ ();
    void operator-- ();
    bool operator== (PersegiPanjang const &)const;
    void cetakPP();

};
#endif