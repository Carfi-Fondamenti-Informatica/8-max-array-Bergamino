#include <iostream>
#include "lib.h"
using namespace std;

int funzione (int a){
    int g=0,r=0,numeri[a];
    for (int i=0;i<a;i++){
        cin >> numeri[r];
        int d = numeri[r];
        r++;
        if(d>g){
            g=d;
        }else if((r==1)&&(d<0)){
            g=d;
        }
    }
    return g;
}
