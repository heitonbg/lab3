/*************************
*  Автор: Фенько А.Н.    *
*  Дата 17.09.2024       *
*  Дата 24.09.2024       *
*  Название: Вариант №11 *
*************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double e = 2.71828;
    double L[4] = {0.6, 6, 0.6, 6};
    double R[4] = {5000, 10000, 5000, 10000};
    double C[4] = {0.03, 0.03, 0.3, 0.3};
    double t = 0.001;
    double E = 12;
    double a, B, i, Q; 
    int I = 0;

    while (I < 4) {

        Q = (R[I])/(2*L[I]);
        B = (1000000/(L[I]*C[I]))-pow(Q, 2);
        a = (1000*E*pow(e, -Q*t))/L[I];
        
        if (B > 0) {
            i = (a*sin(sqrt(B)*t))/sqrt(B);
        }
        else if (B < 0) {
            i = (a*sinh(sqrt(-B)*t))/sqrt(-B);
        }

        // Округление до 4 чисел после запятой
        cout.precision(4);
        cout.setf(ios::fixed);

        cout << "B = " << B << " | i = " << i << endl;

        I++;
        
    }
}