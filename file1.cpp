#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier 
    int panjang, lebar;

    public:

    void input ()
    {
        cout << "masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }
    
    int luasPp(int a, int b)
    {
        return a * b;
    }
    Lingkaran ol;
    };
