/*Користувач вводить з клавіатури розмір одного файлу в гігабайтах 
і швидкість інтернет - з’єднання в бітах на секунду. 
Порахувати, за скільки годин, хвилин і секунд завантажиться файл.*/

#include<iostream>
using namespace std;
int main() {
	float F, I;
	int H = 0, M = 0, S = 0;
	cout << "Vvedite rozmir odnogo faila(GB) i svudkist interneta(bit/sek): ";
	cin >> F >> I;//8GB = 8*8000000000bit, 100Mbit/sek = 100*1000000bit -> 64000000000/100000000 = 640sek
	H = (F * 8000000000 / I) / 3600;
	M = ((F * 8000000000 / I) - (H * 3600)) / 60;
	S = ((F * 8000000000 / I) - (H * 3600)) - (M * 60);
	cout << "\nFail zavantazetsa za " << H << " god " << M << " hv " << S << " sek\n";
}