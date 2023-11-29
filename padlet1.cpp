#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
 {
    srand(time(0));

    int tutulanSayi = rand()%11 + 10;

    cout << "arkadasin aklindan bir sayi tuttu bu sayiyi tahmin et" << endl;

    for (int tahminHakki = 1; tahminHakki <= 2; ++tahminHakki)
    {
        int tahmin;
        cout << tahminHakki << ". tahmininizi girin: ";
        cin >> tahmin;

        if (tahmin==tutulanSayi)
        {
            cout << "tebrikler Sayiyi " << tahminHakki << ".tahminHakki" <<". tahminde buldunuz." << endl;
            cout << "Sayinin iki kati: " << 2*tutulanSayi << endl;
            return 0;

        }else
        {
           cout << "Hatali Tahmin ";
           if (tahminHakki < 2){
               cout << "Bir daha deneyin" << endl;
           }else{
              cout << "Tahmin hakkiniz bitti.Dogru sayi:" << tutulanSayi << endl;
        }
        }

        }
    }



