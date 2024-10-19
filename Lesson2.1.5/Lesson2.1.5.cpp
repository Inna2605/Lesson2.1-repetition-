/*Користувач вводить з клавіатури вартість одного ноутбука, їхню кількість і відсоток знижки. Порахувати загальну суму замовлення.*/

#include<iostream>
using namespace std;
int main() {
	float Nout, Sum;
	int K, Zn;
	cout << "Vvedite vartist noutbyka: ";
	cin >> Nout;
	cout << "Vvedite kilkist noutbykiv: ";
	cin >> K;
	cout << "Vvedite vidsotok znuzku na noutbyk: ";
	cin >> Zn;
	Sum = ((Nout * K) * (100 - Zn)) / 100;
	cout << "Zagalna syma zamovlenna: " << Sum << endl;
}