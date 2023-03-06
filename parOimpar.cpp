#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ingrese un numero y se verificara si es par o impar"<<endl;
	cin>>n;
	while (n>0)
	{
		n-=2;
	}
	if (n==0){
		cout<<" es par"<<endl;
	} else if (n==-1){
		cout<<" es impar"<<endl;
	}
	system("pause");
}
