#include<iostream>

using namespace std;
int main()
{
	int i, j, filas;
	cout<<"ingrese la cantidad de filas para el cuadrado"<<endl;
	cin>>filas;
	for(i=0; i<filas; i++)
	{
		for(j=0; j<filas; j++)
		{
			cout<<"* ";
		}
		cout<<"* "<<endl;
	}
	system("pause");
}
