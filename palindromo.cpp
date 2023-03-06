#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	string palabra, rev;
	cout<<"ingrese la palabra"<<endl;
	cin>>palabra;
	for (int i = palabra.size() - 1; i >= 0; i--) {
		rev = rev.append(1, palabra[i]);
	}
	if (palabra == rev)
	{
		cout<<palabra<<" es un palindromo"<<endl;
	} 
	else if(palabra !=rev)
	{
		cout<<palabra<<" no es un palindromo"<<endl;	
	}
	return 0;
}
