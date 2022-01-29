//
//  funciones.h
//  headers
//
//  Created by david on 28/01/22.
//

//#ifndef funciones_h
//#define funciones_h


//#endif /* funciones_h */
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int multiplicacion(int *p_a,int *p_b){
    int a;
    a = (*p_a)*(*p_b);
    return a;
}

int division(int *p_a,int *p_b){
    int a;
    a = (*p_a)/(*p_b);
    return a;
}

int suma(int *p_a,int *p_b){
    int a;
    a = *p_a+*p_b;
    return a;
}

int resta(int *uno, int *dos){
int res = *uno - *dos;
    return res;
}

int sumaraices(int *uno, int *dos){
    int res = sqrt(*uno) + sqrt(*dos);
    return res;
}
