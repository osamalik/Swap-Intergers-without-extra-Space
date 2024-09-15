#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl << "b = " << b << endl << endl;

	a = a + b; //30
	b = a - b; //30-20=10 
	a = a - b; //30-10=20

	cout << "a = " << a << endl << "b = " << b << endl;

	system("pause");
	return 0;
}