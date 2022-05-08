#include <iostream>
#include "include/rectangle.hpp"

using namespace std;

//Mencari nilai xmin, xmax, ymin, ymax
PersegiPanjang::PersegiPanjang(float TengahX, float TengahY, float panjang, float lebar){
	this->xmin = TengahX - (panjang / 2);
    this->xmax = this->xmin + panjang;
    this->ymin = TengahY - (lebar / 2);
    this->ymax = this->ymin + lebar;
}

//Operator (++) menambah luasan menjadi dua kali luasan sebelumnya
void PersegiPanjang::operator++()
{
	//mencari panjang atau lebar dapat dihitung:
	//titik akhir - titik awal (Xt-X0)
    float panjang = this->xmax - this->xmin;
    float lebar = this->ymax - this->ymin;

	//mengubah agar nilai panjang tetap positif(absolute)
	panjang = abs (panjang);
	lebar = abs (lebar);
    
	//mencari titik tengah dapat dihitung:
	//titik akhir + titik awal dibagi 2 ((Xt+X0)/2)
	float TengahX = (this->xmin + this->xmax) / 2;
    float TengahY = (this->ymin + this->ymax) / 2;

	//Luasan kali 2
	panjang = panjang *2;
	lebar = lebar *2;
    float luas = panjang*lebar;
    cout << "Luas : " << luas <<endl;

    this->xmin = TengahX - panjang/2;
	this->ymin = TengahY - lebar/2;
    this->ymax = TengahY + lebar/2;
	this->xmax = TengahX + panjang/2;

}

//Operator (--) mengurangi luasan menjadi setengah dari luasan sebelumnya
void PersegiPanjang::operator--()
{	
	//mencari panjang atau lebar dapat dihitung:
	//titik akhir - titik awal (Xt-X0)
    float panjang = this->xmax - this->xmin;
    float lebar = this->ymax - this->ymin;

	//mengubah agar nilai panjang tetap positif(absolute)
	panjang = abs(panjang);
	lebar = abs(lebar);

	//mencari titik tengah dapat dihitung:
	//titik akhir + titik awal dibagi 2 ((Xt+X0)/2)
	float TengahX = (this->xmin + this->xmax) / 2;
    float TengahY = (this->ymin + this->ymax) / 2;

	//Luasan bagi 2
	panjang = panjang /2;
	lebar = lebar /2;
    float luas = panjang*lebar;
    cout << "Luas : " << luas <<endl;
    
    this->xmin = TengahX - panjang/2;
    this->ymin = TengahY - lebar/2;
	this->xmax = TengahX + panjang/2;
	this->ymax = TengahY + lebar/2;

}

//
bool PersegiPanjang::operator == (PersegiPanjang const &pbaru) const
{
    if(this->xmax > pbaru.xmin && this->xmin < pbaru.xmax){
        if (this->ymax > pbaru.ymin && this->ymin < pbaru.ymax)
        {
           return true;
        }
        else {
            return false;
        }
    }	
    else
	{
		return false;
	}
}
//
//operator + (menggabungkan kedua luas persegi panjang dengan syarat harus beririsan)
PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &pbaru){
    PersegiPanjang baru(0,0,0,0);

    if (*this == pbaru){
        baru.xmin = min(this-> xmin,pbaru.xmin);
        baru.ymin = min(this-> ymin,pbaru.ymin);
        baru.xmax = max(this-> xmax,pbaru.xmax);
        baru.ymax = max(this-> ymax,pbaru.ymax);
    }
	
	else{
        cout << "bangun PP1 dan PP2 tidak beririsan" << endl;
    }

    return baru;
}

//operator - (mengambil irisan dari dua persegipanjang)
PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &pbaru){
    PersegiPanjang baru(0,0,0,0);

    if (*this == pbaru){
        baru.xmin = max(this-> xmin,pbaru.xmin);
        baru.ymin = max(this-> ymin,pbaru.ymin);
        baru.xmax = min(this-> xmax,pbaru.xmax);
        baru.ymax = min(this-> ymax,pbaru.ymax);
    }
	
	else{
        cout << "bangun PP1 dan PP2 tidak beririsan" << endl;
    }

    return baru;
}

//operator [] (mengambil masing-masing atribut dari class Persegi Panjang)
float PersegiPanjang::operator[](int menu_terpilih) 
{
    switch (menu_terpilih)
    {
    case 0:
        return this->xmin;
    case 1:
		return this->ymin;
    case 2:
		return this->xmax;
    case 3:
        return this->ymax;
    default:
        return 0;
    }
}

void PersegiPanjang::cetakPP()
{
	//mencari panjang atau lebar dapat dihitung:
	//titik akhir - titik awal (Xt-X0)
    float panjang = this->xmax - this->xmin; 
    float lebar   = this->ymax - this->ymin;

	//fungsi abs adalah mengubah bilangan negatif menjadi positif
	panjang = abs(panjang);
    lebar = abs(lebar);

    cout << "Berikut adalah data hasil" << endl;
	//mencari titik tengah dapat dihitung:
	//titik akhir + titik awal dibagi 2 ((Xt+X0)/2)
	cout << "Titik Tengah X : " << (this->xmax + this->xmin)/2  << endl;
    cout << "Titik Tengah Y : " << (this->ymax + this->ymin)/2  << endl;
	cout << "Panjang : " << panjang << endl;
    cout << "Lebar   : " << lebar << endl;
    cout << endl;
    cout << "Nilai xmin : " << this->xmin << endl;
    cout << "Nilai ymin : " << this->ymin << endl;
	cout << "Nilai xmax : " << this->xmax << endl;
    cout << "Nilai ymax : " << this->ymax << endl;
}



