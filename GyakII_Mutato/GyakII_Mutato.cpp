#include <iostream>
using namespace std;

int main()
{
    int f = 10;
    int* mut; // mutatovaltozo
    int &fi = f; // referencia
    mut = &f; // a mutatovaltozo cimere mutat

    cout << "f = " << f << " fi = " << fi 
        << " *mut = " << mut << endl;
    
    fi = 20; // f erteke 20 lesz
    cout << "f = " << f << " fi = " << fi
        << " *mut = " << mut << endl;

    cout << &f << " " << &fi << " " << mut << " " << &mut << endl;
    system("pause");
    return 0;
}
