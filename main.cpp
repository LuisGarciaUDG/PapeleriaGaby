/*
Programa #4 Papelería gaby. Se venden lápices con un costo de 3.50, cuadernos de 15.50 y libros de 89.90.
Calcular la venta de cada mercancia y el total general.
Estructura secuencial
Autor: Luis Alberto García Rodríguez.
N° lista: 11
Fecha 03 de febrero del 2015
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system ("color f1");
    float lapv,cuv,libv,totlap,totcu,totlib,totaldia;
    const float valorlapiz=3.50, valorcuaderno=15.50, valorlibro=89.90;
cout<<"\t\t*****PAPELERIA GABY*****";
cout<<endl<<endl<<endl<<endl;
cout<<"                 (p/u)     Total vendidos"<<endl<<endl;
cout<<" Lapices:        3.50           ";
cin>>lapv;
cin.ignore();
cout<<" Cuadernos:     15.50           ";
cin>>cuv;
cin.ignore();
cout<<" Libros:        89.90           ";
cin>>libv;
cin.ignore();
cout<<endl<<endl<<endl;

totlap=lapv*valorlapiz;
totcu=cuv*valorcuaderno;
totlib=libv*valorlibro;

cout<<" Venta total de lapices:    $ ";
cout<<totlap<<endl;
cout<<" venta total de cuadernos:  $ ";
cout<<totcu<<endl;
cout<<" Venta total de libros:     $ ";
cout<<totlib<<endl;
cout<<endl<<endl<<endl;

totaldia=totlap+totcu+totlib;
cout<<" Venta total del dia:       $ ";
cout<<totaldia<<endl<<endl<<endl<<endl<<endl;
system("pause");
return 0;
}
