#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    //Program untuk membandingkan perekonomian negara
    //by Mochammad Arsya Akhtiar Permana

    //input jumlah list
    float b[1000], c[1000], d[1000], n;
    char a[1000][40];
    cout << "Masukan Jumlah Negara = ";
    cin >> n;
    cout << endl;

    //input nilai
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Masukan Nama Negara\t= ";
        scanf(" %[^\n]s", a[i]);
        cout << "Masukan Populasi\t= ";
        cin >> b[i];
        cout << "Masukan GDP\t= ";
        cin >> c[i];
        d[i] = c[i] / b[i];
    }

    //output list
    system("CLS");
    cout << "====================================================================\n";
    cout << "|  No  |           Nama           |   Pop   |   GDP   | GDP/Capita |\n";
    cout << "====================================================================\n";
    for (int i = 0; i < n; i++)
    {
        cout << "| " << setiosflags(ios::left) << setw(5) << i + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(25) << a[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(8) << b[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(8) << c[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(12) << d[i] << "|";
        cout << "\n====================================================================\n";
    }

    return 0;
}