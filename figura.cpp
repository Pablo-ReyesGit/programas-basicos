#include<iostream>

using namespace std;
int main()
{
	int i, j, filas;
	cout<<"ingrese el numero de filas del triangulo"<<endl;
	cin>>filas;
	for (i=0; i<filas; i++)
	{
		for (j=0; j<filas-i; j++)
		{
			cout<<" ";
		}
		for (j=0; j<i*2+1; j++)
		{
			cout<<"^";
		}
		cout<<"\n";
	}
	system("pause");
}
