

#include <iostream>
#include <list>
using namespace std;

class Individual {

	string name, bankDetails;
	int pinCode;
	float balance, money;

public:
	Individual(string n, string bd, int pc, float b)
	{
		name = n; bankDetails = bd; pinCode = pc; balance = b;
	}

	void showMethods() {
		cout << "1 - Показать баланс\n2 - Снять наличные\n3 - Пополнить счет\n";
	}

	void Money(int operation) {
		
		while (true) {
			switch (operation)
			{
			case 1:
				showBalance();
				break;
			case 2:
				cout << "Введите сумму, которую хотите снять: ";
				cin >> money;
				withDraw(money);
				break;
			case 3:
				cout << "Введите сумму, которую хотите внести: ";
				cin >> money;
				top(money);
				break;
			default:
				cout << "Выбрана неверная операция!\n";
				true;
			}
		}

	}

	void showBalance() {
		cout << "Ваш баланс: " << balance;
	}

	void withDraw(float money) {
		balance -= money;
		cout << "Ваш баланс после снятия наличных: " << balance;
	}

	void top(float money) {
		balance += money;
		cout << "Ваш баланс после пополнения счета: " << balance;
	}

	bool authorithation(int pc) {
		return (pinCode == pc) ? true : false;
	}
};



int main()
{
	setlocale(LC_ALL, "RU");
	list <Individual> spisok;
	Individual Sofa("Софья", "12456789", 1234, 100000000);
	spisok.push_back(Sofa);
	Sofa.showBalance();
	cout << "Введите ПИН-Код: ";
	int pc;
	cin >> pc;

}


