#include <iostream>
using namespace std;
int main()
{
    int dizi1[5], dizi2[5], dizi3[5];
    int i;
    for(i=0; i<5;i++)
    {
    cout<<"1. Dizinin "<< (i+1) <<".elemanini girin: ";
    cin >>dizi1[i];

    }for(i=0; i<5;i++)
    {
    cout<<"2. Dizinin "<< (i+1) <<".elemanini girin: ";
    cin >>dizi2[i];

    }for(i=0; i<5;i++)
    {
        dizi3[i] = dizi1[i] + dizi2[i];
        cout<<"3. Dizinin "<< (i+1) <<".elemani "<<dizi1[i] + dizi2[i];


    }

}
