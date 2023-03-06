#include<iostream>

using namespace std;
int main()
{
	int i, num1, num2, promedio;
	cout<<"ingrese cuantos numeros se van a usar para el promedio"<<endl;
	cin>>num1;
	for(i=0; i<=num1; i++)
	{
		cout<<"ingrese un numero de la secuencia"<<endl;
		cin>>num2;
		promedio+=num2;
	}
	cout<<promedio/num1<<endl;
	system("pause");
}
