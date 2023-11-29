#include <iostream>

const int SATIRLAR = 3;
const int SUTUNLAR = 4;

using namespace std;

void sozluksiralamaKontrol(int hafta1[SATIRLAR][SUTUNLAR]){
    bool ayniSiralama = true;

    for (int i = 0; i < SATIRLAR; ++i){
        for (int j = 0; j < SUTUNLAR; ++j){
            if (hafta1[i][j] != hafta2[i][j]) {
                aynisiralama = false;
                break;
        }
    }
    if (aynisiralama){
            cout << " oðrencilerin siralamasi iki hafta boyunca ayni!" << endl;
    }else {
        cout << "ogrencilerin siralamasi iki hafta boyunca ayni degil" << endl;
    }

    int main(){
    int hafta1[SATIRLAR][SUTUNLAR] = {1, 3, 5, 7},
                                       {11, 9, 12, 10},
                                       {2, 4, 6, 8}};
    int hafta2[SATIRLAR][SUTUNLAR] = {1, 3, 5, 7},
                                       {11, 9, 12, 10},
                                       {2, 4, 6, 8}};

 sozlusiralamaKontrol(hafta1, hafta2);

    }
