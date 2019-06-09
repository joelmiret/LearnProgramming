#include <iostream>
using namespace std;

int main() {
	int temp, humitat;
	cout << "temperatura ? ";
	cin >> temp;
	cout << "humitat ";
	cin >> humitat;
	cout << "temperatura : " << temp << ", humitat " << humitat << endl;
	 
	if (temp < 0 and humitat < 30) {
		cout << "fa fred i no plou" << endl;
	}
	else if (temp >= 0 and temp <= 30 and humitat < 30) {
		cout << "fa bo i no plou" << endl;
	}
	else if (temp > 30 and humitat <30) {
		cout << "fa calor i no plou" << endl;
	}
	else if (temp < 0 and humitat >= 30 and humitat <= 70) {
		cout << "fa fred" << endl;
	}
	else if (temp >= 0 and temp <= 30 and humitat >= 30 and humitat <= 70) {
		cout << "fa bo" << endl;
	}
	else if (temp > 30 and humitat >= 30 and humitat <= 70) {
		cout << "fa calor" << endl;
	}
	else if (temp >= 0 and temp <= 30 and humitat > 70) {
		cout << "fa bo i plou" << endl;
	}
	else if (temp > 30 and humitat > 70) {
		cout << "fa calor i plou" << endl;
	}
	else {
		cout << "fa fred i plou" << endl;
	}
	if (humitat == 100) {
		cout << "plou molt" << endl;
	}
}
