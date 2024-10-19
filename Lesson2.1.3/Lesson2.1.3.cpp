/*Користувач вводить з клавіатури два числа. Порахувати їхню суму, добуток і середнє арифметичне.*/

#include<iostream>
using namespace std;
int main() {
	float N1, N2, Sum, Dob, SA;
	cout << "Vvedite dva chisla: ";
	cin >> N1 >> N2;
	Sum = N1 + N2;
	Dob = N1 * N2;
	SA = (N1 + N2) / 2;
	cout << "\nSumma Sum = " << N1 << " + " << N2 << " = " << Sum
		<< "\nDobutok Dob = " << N1 << " * " << N2 << " = " << Dob
		<< "\nSeredne arefmetuchne SA = (" << N1 << " + " << N2 << ") / 2 = " << SA << endl;
}