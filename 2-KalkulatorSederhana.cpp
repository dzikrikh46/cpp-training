#include <iostream>

using namespace std;

int main()
{
    int input1 = 0;
    int input2 = 0;
    char operasi;
    cout << "Masukkan angka pertama  : ";
    cin >> input1;

    cout << "Masukkan operator (+,-,*,/)  : ";
    cin >> operasi;

    cout << "Masukkan angka kedua  : ";
    cin >> input2;
    
    switch(operasi)
    {
        case '+':
            cout << "Hasil = " << input1 << " + " << input2 << " = " << input1 + input2 << endl;
            break;

        case '-':
            cout << "Hasil = " << input1 << " - " << input2 << " = " << input1 - input2 << endl;
            break;

        case '*':
            cout << "Hasil = " << input1 << " * " << input2 << " = " << input1 * input2 << endl;
            break;

        case '/':
            if(input2 == 0)
            {
                cout << "Tidak bisa membagi dengan nol!" << endl;
            }
            else
            {
                cout << "Hasil = " << input1 << " / " << input2 << " = " << input1 / input2 << endl;
            }
            break;

        default:
            cout << "Operator yang anda masukkan tidak valid!" << endl;
            break;
    }
}