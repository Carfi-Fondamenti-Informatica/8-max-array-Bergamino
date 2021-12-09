#include <iostream>
#include "lib.h"
using namespace std;

float funzione (int a){
    int g=0,r=0;
    float numeri[a];
    for (int i=0;i<a;i++){
        cin >> numeri[r];
        float d = numeri[r];
        r++;
        if(d>g){
            g=d;
        }else if((r==1)&&(d<0)){
            g=d;
        }
    }
    return g;
}
