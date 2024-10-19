/*Користувач вводить з клавіатури три числа. Порахувати їхню суму, добуток і середнє арифметичне.*/

#include<iostream>
using namespace std;
int main() {
	float N1, N2, N3, Sum, Dob, SA;
	cout << "Vvedite tru chisla: ";
	cin >> N1 >> N2 >> N3;
	Sum = N1 + N2 + N3;
	Dob = N1 * N2 * N3;
	SA = (N1 + N2 + N3) / 3;
	cout << "\nSumma Sum = " << N1 << " + " << N2 << " + " << N3 << " = " << Sum
		<< "\nDobutok Dob = " << N1 << " * " << N2 << " * " << N3 << " = " << Dob
		<< "\nSeredne arefmetuchne SA = (" << N1 << " + " << N2 << " + " << N3 << ") / 3 = " << SA << endl;
}