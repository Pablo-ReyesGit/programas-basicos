#include<iostream>

using namespace std;
int main()
{
	int n, i;
	cout<<"programa para hacer tablas de multimplicar"<<endl;
	cout<<"escriba el numero que quiera que se haga la tabla de multiplicar"<<endl;
	cin>>n;
	for(i=0; i<=10; i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
