#include <iostream>
using namespace std;
int main(){
    int max = 2147483647;
    int min = -2147483648;
    // Numero massimo possibile è 2^31-1 = 2147483647
    // Numero minimo possibile è -2^31 = -2147483648
    cout << "Numero massimo: " << max << endl;
    cout << "Numero minimo: " << min << endl;
    cout << "Numero massimo+1: " << max+1 << endl;
    cout << "Numero minimo-1: " << min-1 << endl;
    return 0;
}
