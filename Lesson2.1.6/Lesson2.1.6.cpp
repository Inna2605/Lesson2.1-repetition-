/*Зарплата менеджера — 100$ + 5% від продажів. 
Користувач вводить з клавіатури загальну суму угод менеджера за місяць. 
Порахувати підсумкову зарплату менеджера.*/

#include<iostream>
using namespace std;
int main() {
	float M, Sum;
	cout << "Vvedite zagalny symy ygod za misac: ";//zarplata 100$ + 5% vid prodaziv
	cin >> M;
	Sum = 100 + ((M * 5) / 100);
	cout << "\nPidsymkova zarplata: " << Sum << endl;
}