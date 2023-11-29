#include <iostream>
using namespace std;
int main()
{


    int sayilar[100];
    int i, n, bol5 = 0;
    cout << "Eleman sayisini girin : ";
    cin >> n;
    cout << "\n Dizi elemanlarini girin :\n";
    for(i=0; i<n; i++)
    {
        cout << "Elemani girin dizi[" << i << "] : ";
        cin >> sayilar[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(sayilar[i]%5==0) bol5++;
    }
        cout << "\n5 ile bolunubilen eleman sayisi: "<< bol5;
    return 0;


}
