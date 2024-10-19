/*Користувач вводить з клавіатури час у секундах, що минув з початку дня. 
Вивести на екран поточний час у годинах, хвилинах і секундах. 
Порахувати, скільки годин, хвилин і секунд залишилося до півночі.*/

#include<iostream>
using namespace std;
int main() {
	float C;
	int H = 0, M = 0, S = 0, Hp = 0, Mp = 0, Sp = 0;
	cout << "Vvedite chas: ";
	cin >> C;
	H = C / 3600;
	M = (C - (H * 3600)) / 60;
	S = (C - (H * 3600)) - (M * 60);
	cout << "\nPotochnuy chas: " << H << " god " << M << " hv " << S << " sek\n";
	Hp = ((24 * 3600) - C) / 3600;
	Mp = (((24 * 3600) - C) - (Hp * 3600)) / 60;
	Sp = (((24 * 3600) - C) - (Hp * 3600)) - (Mp * 60);
	cout << "Zalusulosa do pivnochi: " << Hp << " god " << Mp << " hv " << Sp << " sek\n";
}