// Triangulos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;


    int main()
    {
        int a, b, c;
        float A, B, Area, H, P;

        cout << "\nPrimer lado: "; cin >> a;
        cout << "Segundo lado: "; cin >> b;
        cout << "Tercer lado: "; cin >> c;

        if (a == b == c)
            cout << "\nEs un triangulo isoceles" << endl;
        else if (a == b || a == c || b == c)
            cout << "\nEs un triangulo equilatero" << endl;
        else
            cout << "\nEs un triangulo Escaleno" << endl;
        cout << "\nIngresa la base del triangulo: ";
        cin >> B;
        cout << "\n" << endl;
        cout << "Ingresa la altura del triangulo: " << "\n";
        cin >> A;
        Area = (A * B) / 2;
        H = sqrt((pow(A, 2)) + (pow(B, 2)));
        P = B + A + H;
        cout << "\n" << endl;
        cout << "El Area es:" << Area << endl;
        cout << "\n" << endl;
        cout << "la Hipotenusa es:" << H << endl;
        cout << "\n" << endl;
        cout << "El Perimetro es:" << P << endl;
        cout << "\n" << endl;
        system("pause");
        return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
