/*Користувач вводить з клавіатури діаметр окружності. Порахувати площу і периметр окружності.*/

#include<iostream>
using namespace std;
int main() {
	float D, S, P, pi = 3.14;
	cout << "Vvedite diametr: ";
	cin >> D;
	S = pi * (D / 2) * (D / 2);
	P = pi * D;
	cout << "\nPlosha S = " << S 
		<< "\nperimetr (dovzena kola) P = " << P << endl;
}
