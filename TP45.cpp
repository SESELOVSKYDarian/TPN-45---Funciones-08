#include <iostream>
#include <string>
using namespace std;
bool EsBisiesto(int anio);
int main ()
{
	int anio;
	string msg="NO";
	cout<<"Ingrese el anio: ";
	cin>>anio;
	if (EsBisiesto(anio))
	{
		msg="SI";
	}
	cout<<msg<<endl;
	return 0;
}
bool EsBisiesto(int anio)
{
	bool flag=false;
	if (anio%4==0){
		flag=true;
	}
	return flag;
}