#include <iostream>
using namespace std;

int main() {
    int a;
    int hasil1, hasil2, hasil3, hasil4, hasil5, hasil6, hasil7, hasil8, hasil9, hasil10;

    cout << "Masukkan angka: ";
    cin >> a;

    hasil1 = a / 2;
    hasil2 = hasil1 / 2;
    hasil3 = hasil2 / 2;
    hasil4 = hasil3 / 2;
    hasil5 = hasil4 / 2;
    hasil6 = hasil5 / 2;
    hasil7 = hasil6 / 2;
    hasil8 = hasil7 / 2;
    hasil9 = hasil8 / 2;
    hasil10 = hasil9 / 2;


    cout << hasil1 << " " << hasil2 << " " << hasil3 << " " << hasil4 << " " << hasil5 << " " << hasil6 << " " << hasil7 << " " << hasil8
    << " " << hasil9 << " " << hasil10 << endl;

    //Hasil 1
    if (hasil1 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil1 * 2 == a)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 2
    if (hasil1 == 0)
    {
        cout << "" << endl;
    }  
    else if (hasil2 * 2 == hasil1)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 3
    if (hasil2 == 0)
    {
        cout << "" << endl;
    }  
    else if (hasil3 * 2 == hasil2)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 4
    if (hasil3 == 0 )
    {
        cout << "" << endl;
    }  
    else if (hasil4 * 2 == hasil3)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 5
    if (hasil4 == 0)
    {
        cout << "" << endl;
    }   
    else if (hasil5 * 2 == hasil4)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    
    //Hasil 6
    if (hasil5 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil6 * 2 == hasil5)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    
    //Hasil 7
    if (hasil6 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil7 * 2 == hasil6)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 8
    if (hasil7 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil8 * 2 == hasil7)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    //Hasil 9
    if (hasil8 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil9 * 2 == hasil8)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    //Hasil 10
    if (hasil9 == 0)
    {
        cout << "" << endl;
    }
    else if (hasil10 * 2 == hasil9)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    cout << "\nDari bawah ke atas" << endl;
        
    cin.get();
    return 0;
}