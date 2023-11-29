#include <iostream>
using namespace std;
int main()
{
    int sayilar[] = {19, 11, 21, 13, 15};
    int i, maks, yer, n = 5;

    cout << "Dizi: ";

    for(i=0; i <n; i++)
        cout << sayilar[i] << " ";
    cout << endl;
    maks = sayilar[0];
    yer = 0;
    for(i=1; i < n; i++)
    {
        if(maks < sayilar[i])
        {
            maks = sayilar[i];
            yer = i;

        }
    }
    cout << "Dizinin en buyuk elemani " << maks << "\nindisi ise " << yer;
}
