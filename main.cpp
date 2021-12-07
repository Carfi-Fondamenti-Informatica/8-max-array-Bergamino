#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int a=0;
    cin >> a;
    int numeri[a];
    cout << somma(numeri, a)<<endl;
    return 0;
}
