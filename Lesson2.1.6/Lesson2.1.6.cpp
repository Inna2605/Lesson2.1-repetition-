/*�������� ��������� � 100$ + 5% �� �������. 
���������� ������� � ��������� �������� ���� ���� ��������� �� �����. 
���������� ��������� �������� ���������.*/

#include<iostream>
using namespace std;
int main() {
	float M, Sum;
	cout << "Vvedite zagalny symy ygod za misac: ";//zarplata 100$ + 5% vid prodaziv
	cin >> M;
	Sum = 100 + ((M * 5) / 100);
	cout << "\nPidsymkova zarplata: " << Sum << endl;
}