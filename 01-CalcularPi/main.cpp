/* Trabajo práctico numero 1 "Calcular π"
a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592) */

#include <iostream> // directiva del preprocesador
#include <cmath> 

using namespace std; 

int main(){
    // Declaración de valores
    float c=0.0;
    int i=0;

    // Ciclo para calcular pi
    while (abs(c*4 - M_PI) >= 0.000001){
        float t = pow(-1, i) / ((2*i) + 1);
        c += t;
        i++;
    }

    cout.precision(7); // aclaro que necesito los 6 primeros decimales despues de la coma

    cout << "El valor aproximado de pi es: " << c*4 << endl; // Resultado en pantalla

    return 0;
}
