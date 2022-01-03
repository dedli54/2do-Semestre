#include <fstream>
#include <iostream>

using namespace std;

void main()
{
	ofstream fichero("ejemplo90.txt", ios_base::out);
	fichero << "programacion basica2" << endl;
	fichero << "ya casi se acaba2" << endl;
	fichero << "ya viene navidad2" << endl;
	fichero.close();
}