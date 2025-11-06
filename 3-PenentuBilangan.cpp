#include <iostream>

using namespace std;

int main()
{
    int input = 0;

    cout << "Program Penentu Bilangan Genap/Ganjil, positif/negatif, dan nol" << endl << endl;
    cout << "Masukkan angka : ";
    cin >> input;
    if(input < 0)
    {
        cout << "Angka " << input << " adalah bilangan negatif" << endl;
    }
    else if(input > 0)
    {
        cout << "Angka " << input << " adalah bilangan positif" << endl;
    }
    else
    {
        cout << "Angka " << input << " adalah nol" << endl;
    }

    if(input % 2 == 0)
    {
        cout << "Angka " << input << " adalah bilangan genap" << endl;
    }
    else
    {
        cout << "Angka " << input << " adalah bilangan ganjil" << endl;
    }
    return 0;
}