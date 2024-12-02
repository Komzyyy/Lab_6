#include <iostream>
#include "windows.h" 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count;
    double weight, r;
    cout << "Введіть   weight: ", cin >> weight; cout << "Введіть   count: ", cin >> count;
    switch (count) {
    case 1: r = weight, cout << r, cout << " кілограм\n";
        break;
    case 2: r = weight / 1000000, cout << r, cout << " кілограм\n";
        break;
    case 3: r = weight / 1000, cout << r, cout << " кілограм\n\n";
        break;
    case 4: r = weight * 1000, cout << r, cout << " кілограм\n\n";
        break;
    case 5: r = weight * 100, cout << r;cout << " кілограм\n\n";
        break;  }
    
    system("pause");
    return 0;
    }

