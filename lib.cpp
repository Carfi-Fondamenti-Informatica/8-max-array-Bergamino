#include <iostream>
#include "lib.h"
using namespace std;

int somma(int numeri[], int dimensione){
    int sum = 0,q=0;
    for(int i=0;i < dimensione; i++){
        cin>>numeri[i];
        if (numeri[i]>q){
            q=numeri[i];
        }
        sum += numeri[i];
    }
    return q;
}
