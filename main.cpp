#include<iostream>
#include<string.h>
#include <conio.h>
using namespace std;

int meses[12] = {22,21,25,29,37,45,36,38,34,30,33,25};
int temp;
const char * mes[12] = {"E","F","M","A","M","J","J","A","S","O","N","D"};
int mayor = 0;
const char * maxcal;

int main()
{
    for(temp = 0; temp < 12; temp++)
    {
        if(meses[temp] > mayor)
        {
            mayor = meses[temp];
            maxcal = mes[temp];
        }
    }
    
    cout <<  "Ingrese un mes ";
    cin >> temp ;
    
    switch(temp)
    {
        case 1: cout << "Enero tuvo "<<meses[temp-1]<<" grados";
        break;
        case 2: cout << "Febrero tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 3: cout << "Marzo tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 4: cout << "Abril tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 5: cout << "Mayo tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 6: cout << "Junio tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 7: cout << "Julio tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 8: cout << "Agosto tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 9: cout << "Septiembre tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 10: cout << "Octubre tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 11: cout << "Noviembre tuvo "<<meses[temp-1]<<" grados" ;
        break;
        case 12: cout << "Diciembre tuvo "<<meses[temp-1]<<" grados" ;
    }
    cout << "\n" << "El mes con mayor temperatura es " << maxcal << " con " << mayor << " grados" << endl;
}