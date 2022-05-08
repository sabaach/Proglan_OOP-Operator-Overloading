#include <iostream>                                                                     //* TUGAS PROGLAN OPERATOR OVERLOADING PERSEGI PANJANG C++ *
#include "include/rectangle.hpp"                                                          //Nama       : Syafrie Bachtiar
using namespace std;                                                                      //Kelas      : Pemrograman Lanjut B
                                                                                          //NRP        : 5024211063
                                                                                          //Departemen : Teknik Komputer
int main (){
     float TengahX,TengahY, panjang, lebar;

        start:
        cout << "___Selamat Datang di Program OPERATOR OVERLOADING PERSEGI PANJANG C++ ___" <<endl;
        cout << "Dibuat oleh : Syafrie Bachtiar" <<endl;
        cout << "NRP         : 5024211063" <<endl;
        cout << "Teknik Komputer 2021" <<endl;
        cout << endl;

        cout << "Masukkan data persegi panjang 1: " << endl;
        cout << "Masukkan Panjang Persegi Panjang 1: " <<endl;
        cin >> panjang;
        cout << "Masukkan Lebar Persegi Panjang 1: " <<endl;
        cin >> lebar;
        cout << "Masukkan Titik Tengah X Persegi Panjang 1: " <<endl;
        cin >> TengahX;
        cout << "Masukkan Titik Tengah Y Persegi Panjang 1: " <<endl;
        cin >> TengahY;
        PersegiPanjang P1(TengahX,TengahY,panjang,lebar);

        cout << endl;
        cout << "Nilai Inputan Persegi Panjang 1 : \n";
        P1.cetakPP();

        cout << endl;
        cout << "Masukkan data persegi panjang 2: " << endl;
        cout << "Masukkan Panjang Persegi Panjang 2: " <<endl;
        cin >> panjang;
        cout << "Masukkan Lebar Persegi Panjang 2: " <<endl;
        cin >> lebar;
        cout << "Masukkan Titik Tengah X Persegi Panjang 2: " <<endl;
        cin >> TengahX;
        cout << "Masukkan Titik Tengah Y Persegi Panjang 2: " <<endl;
        cin >> TengahY;
        PersegiPanjang P2(TengahX,TengahY,panjang,lebar);
        
        cout << endl;
        cout << "Hasil nilai inputan kedua Persegi Panjang : " << endl; 
        cout << endl;
        cout << "Nilai Inputan Persegi Panjang 1 : ";
        cout << endl;
        P1.cetakPP();
        cout << endl;
        cout << "Nilai Inputan Persegi Panjang 2 : ";
        cout << endl;
        P2.cetakPP();

        while (1)
        {
        cout << endl;
        cout << "---- Selamat Datang Di menu Operator Overloading Persegi Panjang: ---- " << endl;
        cout << "  1. Operator ++" << endl;
        cout << "  2. Operator --" << endl;
        cout << "  3. Operator ==" << endl;
        cout << "  4. Operator +" << endl;
        cout << "  5. Operator -" << endl;
        cout << "  6. Operator []" << endl;
        cout << "  7. Ulang dari awal " << endl;
        cout << "-> Silahkan memilih salah satu: ";
        int menu_pilihan;
        cin >> menu_pilihan;

        cout << endl;
        switch (menu_pilihan)
        {
        case 1:{
            cout << "Operator ++" << endl;
            cout << "menambah luasan menjadi dua kali luasan sebelumnya" << endl;
            cout << "Pilih Persegi panjang yang ingin ditambah luasnya" << endl;
            int milih;
            cout << "1). PersegiPanjang 1 " << endl;
            cout << "2). PersegiPanjang 2 " << endl;
            cin >> milih;
            
            switch (milih)
        {
            case 1:{
            cout << endl;
            cout << "Nilai Persegi Panjang 1 sebelum ditambahkan" << endl;
            P1.cetakPP();
            cout << "Nilai Persegi Panjang 1 setelah di ++ : " << endl;
            ++P1;
            P1.cetakPP();  
             break;   
            }
            case 2:{
            cout << endl;
            cout << "Nilai Persegi Panjang 2 sebelum ditambahkan" << endl;
            P2.cetakPP();
            cout << "Nilai Persegi Panjang 2 setelah di ++ : " << endl;
            ++P2;
            P2.cetakPP();  

             break;   
            }
            default:{
               cout << "masukkan inputan dengan benar"<<endl;
               break;     
            }   
        }
        break;       
        }
            
        case 2:{
            cout << "Operator --" << endl;
            cout << "mengurangi luasan menjadi setengah kali luasan sebelumnya" << endl;
            cout << "Pilih Persegi panjang yang ingin dikurangi luasnya" << endl;
            int milih1;
            cout << "1). PersegiPanjang 1 " << endl;
            cout << "2). PersegiPanjang 2 " << endl;
            cin >> milih1;

            switch (milih1)
        {
            case 1:{
            cout << endl;
            cout << "Nilai Persegi Panjang 1 sebelum dikurangi" << endl;
            P1.cetakPP();
            cout << "Nilai Persegi Panjang 1 setelah di -- : " << endl;
            --P1;
            P1.cetakPP(); 
             break;   
            }
            case 2:{
            cout << endl;
            cout << "Nilai Persegi Panjang 2 sebelum dikurangi" << endl;
            P2.cetakPP();
            cout << "Nilai Persegi Panjang 2 setelah di -- : " << endl;
            --P2;
            P2.cetakPP();
             break;   
            }
            default:{
               cout << "masukkan inputan dengan benar"<<endl;
               break;     
            }
                
        }
        break; 
        }
             
        case 3:{
            cout << "Operator ==" << endl;
            if (P1==P2){
                    cout << "Kedua persegi panjang beririsan" << endl;
                }else{
                    cout << "Kedua persegi panjang tidak beririsan" << endl;
                }
        break;
        }
              
        case 4:{
            PersegiPanjang pbaru(0,0,0,0);
            cout << "Operator +" << endl;
            pbaru = P1 + P2;
                if (P1==P2){
                    pbaru.cetakPP();
                }
            break;
        }
        
        case 5:{
            PersegiPanjang pbaru(0,0,0,0);
            cout << "Operator -" << endl;
            pbaru = P1 - P2;
                if (P1==P2){
                    pbaru.cetakPP();
                }
            break;
        }
    
        case 6:{
            cout << "Selamat datang di operator [] : " << endl;
            cout << "Pilih nilai atribut yang ingin diliat : " << endl;
            cout << "  1. Nilai Xminimum : xmin" << endl;
            cout << "  2. Nilai Yminimum : ymin" << endl;
            cout << "  3. Nilai Xmaksimum: xmax" << endl;
            cout << "  4. Nilai Ymaksimum : ymax" << endl << endl;
                int menu;
                cin >> menu;
                switch (menu){
                    case 1:{
                        cout << "Nilai xmin" << endl;
                        cout << "Persegi Panjang 1: " << endl;
                        cout << P1[0] << endl; 
                        cout << "Persegi Panjang 2: " << endl;
                        cout << P2[0] << endl;
                        cout << endl;
                        break;  
                    }
                    case 2:{
                        cout << "Nilai ymin" << endl; 
                        cout << "Persegi Panjang 1: " << endl;
                        cout << P1[1] << endl; 
                        cout << "Persegi Panjang 2: "<< endl;
                        cout << P2[1] << endl; 
                        cout << endl;
                        break;  
                    }
                    case 3:{
                        cout << "Nilai xmax" << endl; 
                        cout << "Persegi Panjang 1: " << endl;
                        cout << P1[2] << endl; 
                        cout << "Persegi Panjang 2: " << endl;
                        cout << P2[2] << endl;
                        cout << endl;
                        break;  
                    }
                    case 4:{
                        cout << "Nilai ymax" << endl;  
                        cout << "Persegi Panjang 1: " << endl;
                        cout << P1[3] << endl; 
                        cout << "Persegi Panjang 2: " << endl;
                        cout << P2[3] << endl; 
                        cout << endl;
                        break;  
                    }
                    default:{
                        cout << "Silahkan masukkan inputan dengan benar" << endl;
                        break;
                    }   
                }
        break;
        }
        case 7 :{
            cout << "Mengulang..." <<endl;
            goto start;
            break;
        }              
        default:{
            cout << "Inputan yang anda masukkan salah"<<endl;
            cout << "Silahkan coba lagi"<<endl;            
        }
    }
    }
}



