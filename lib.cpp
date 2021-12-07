#include <iostream>
#include "lib.h"
using namespace std;
int funzione (int a){
    int d=0,g=0,r=0,numeri[a];
    for (int i=0;i<a;i++){
        cin >> d;
        numeri[r]=d;
        ++r;
        if(d>g){
            g=d;
        }
    }
    return g;
}
