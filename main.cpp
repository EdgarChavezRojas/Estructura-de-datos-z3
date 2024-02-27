#include <iostream>
using namespace std;
int MCD(int, int);
int MCM(int, int);



int main() {
    int p, q;

    
    cout << "Ingrese el primer número: ";
    cin >> p;

    cout << "Ingrese el segundo número: ";
    cin >> q;

    
    cout << "El mínimo común múltiplo de es: "<<MCM(p, q);

    return 0;
}
int MCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return MCD(b, a % b);
    }
}
int MCM(int x, int y) {
    
    return (x * y) / MCD(x, y);
}