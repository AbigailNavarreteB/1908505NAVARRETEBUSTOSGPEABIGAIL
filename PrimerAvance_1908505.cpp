#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;
int main()
{
	int numarticulo, lanzamnto, opc;
	float preciounit, iva, total;
	string nomvideojuego, clasif, caract, descrip, genero, consola;

	cout << "\t ***GAMEPLANET*** \n";
	cout << " 1.-Capturar Videojuego \n 2.-Modificar dato de Videojuego\n 3-.Eliminar Videojuego \n 4.-Total de Videojuegos Vigentes \n 5.-Limpiar dato de Videojuego(s) \n 6-.Salir \n";
	cin >> opc;

	switch (opc)
	{
	case 1: //captura
		cout << "Ingrese el numero del videojuego \n";
		cin >> numarticulo;
		cout << "Ingrese el nombre del videojuego \n";
		cin.ignore();
		getline(cin, nomvideojuego);
		cout << "Ingrese fecha de lanzamiento \n";
		cin >> lanzamnto;
		cout << "Ingrese la clasificacion \n";
		cin.ignore();
		getline(cin, clasif);
		cout << "Ingrese breves caracteristicas \n";
		cin.ignore();
		getline(cin, caract);
		cout << "Ingrese breve descripcion \n";
		cin.ignore();
		getline(cin, descrip);
		cout << "Ingrese el genero del videjuego \n";
		cin.ignore();
		getline(cin, genero);
		cout << "Ingrese tipo de consola del videojuego \n";
		cin.ignore();
		getline(cin, consola);
		cout << "Ingrese el precio unitario del videjuego \n";
		cin >> preciounit;
		iva = preciounit * 0.16;
		total = preciounit + iva;
		cout << "el iva es: " << iva;
		cout << "El total de su compra es de: \n";
		cout << total << "MXN \n";
		cout << " \n";
		return main();
		system("PAUSE");
		break;

	case 2: //modificar
		return main();
		break;

	case 3: //eliminar
		return main();
		break;

	case 4: //total
		return main();
		break;

	case 5: //limpiar
		system("cls");
		return main();
		break;

	case 6: //salir
		cout << "¡Gracias, vuelva pronto!";
		system("PAUSE");
		break;

	default:
		cout << "Ingrese la opción correcta \n";
		return main();

	}
}