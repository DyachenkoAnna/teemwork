// TW.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int ch;

	do {
		cout << "Select a menu item:" << endl;
		cout << "\t1. Addition" << endl;
		cout << "\t2. Subtraction" << endl;
		cout << "\t3. Multiplication" << endl;
		cout << "\t4. Division" << endl;
		cout << "\t0. OUT\n>";
		cin >> ch;

		switch (ch) {
		case 0:
			cout << "Exit from switch..." << endl;
			break;
		case 1:
			cout << "The MySum() is being developed" << endl;
			break;
		case 2:
			cout << "The MySub() is being developed" << endl;
			break;
		case 3:
			cout << "The MyMul() is being developed" << endl;
			break;
		case 4:
			cout << "The MyDiv() is being developed" << endl;
			break;
		default:
			cout << "There is no such menu item!" << endl;
			break;
		}
		cout << "" << endl;
	} while (ch != 0);

	system("pause");
	return 0;
}