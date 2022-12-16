#include "matriz.h"


using namespace std;

int matriz[30][30];

void guardad_matriz(int fila, int columna );
void visualizar_b(int fila, int columna);
void guardad_vector(int fila, int columna);


int main()
{
	
	int filas, columnas,r;

	cout << "Espesifique el numero de    filas:  "; cin >> filas;
	cout << "Espesifique el numero de columnas:  "; cin >> columnas;

	
	guardad_matriz(filas, columnas);
	
	visualizar_b(filas, columnas);
	
	guardad_vector(filas, columnas);
	

	cout << "Reiniciar" << endl;
	cout << "Si = 1" << endl;
	cout << "No = 0" << endl;
	cout << " :";
	cin >> r;


	if (r==1)
	{
		system("cls");
		return main();
	}

	return 0;
}



void guardad_matriz(int fila, int columna) {

	for (int j = 0; j < fila; j++)
	{
		for (int a = 0; a < columna; a++)
		{
			cout << "Digite un numero: Fila[" << j << "] Columna[" << a << "]: ";

			cin >> matriz[j][a];

		}
	}
	system("pause");
	system("cls");
}


void visualizar_b(int fila, int columna) {


	cout << "La matriz Bidimensional es:" << endl;

	for (int r = 0; r < fila; r++)
	{
		for (int p = 0; p < columna; p++) {

			cout << "[" << matriz[r][p] << "]";
		}

		cout << endl;
	}
	system("pause");
	system("cls");
}

void guardad_vector(int fila, int columna) {

	cout << "La matriz unidimencional"<<endl;
	cout << endl;

	int vector[30]{};
	int dato=0;
	for (int j = 0; j < fila; j++)
	{
		for (int a = 0; a < columna; a++)
		{
			vector[dato] = matriz[j][a];
			
				if (vector[dato]>0)
				{
					cout << "  [" << j <<"]["<< a<<"]  ("<< vector[dato]<<")";
				}
		}
	}

	cout << endl;
	system("pause");
	system("cls");
}

