#include <iostream>
#include "windows.h" 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    double w, r;
    cout << "Enter w: ", cin >> w; cout << "Enter n: ", cin >> n;
    switch (n) {
    case 1: r = w, cout << r, cout << " kilograms\n";
        break;
    case 2: r = w / 1000000, cout << r, cout << " kilograms\n";
        break;
    case 3: r = w / 1000, cout << r, cout << " kilograms\n";
        break;
    case 4: r = w * 1000, cout << r, cout << " kilograms\n";
        break;
    case 5: r = w * 100, cout << r;cout << " kilograms\n";
        break;  }
    
    system("pause");
    return 0;
    }

