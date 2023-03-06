#include<iostream>

using namespace std;
int main()
{
	int i, vec1[2], vec2[2];
	cout<<"ingrese los valores del primer vector"<<endl;
	for(i=0; i<2; i++)
	{
		cin>>vec1[i];
	}
	cout<<"ingrese los valores del primer vector"<<endl;
	for(i=0; i<2; i++)
	{
		cin>>vec2[i];
	}
	for(int j=0; j<2; j++)
	{
		cout<<"componente "<<j+1<<" "<<vec1[j]+vec2[j]<<" "<<endl;
	}
	system("pause");
}
