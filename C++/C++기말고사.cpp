#include <iostream>

using namespace std;



class Machine {

	int coin = 0;

	int coOut = 0;

	int cacu = 0;



	int cola = 0;

	int fanta = 0;

	int two = 0;

	int cider = 0;



public:

	void setCoin() {

		cout << "���� �������ּ��� : ";

		cin >> coin;

		cout << coin << "��" << endl;

	}

	void setMenu() {

		int set;

		cout << "1.�ݶ� : 1000��, 2.ȯŸ : 800��, 3.������ 1500��, 4.���̴� 1300��" << endl;

		cout << "� ���Ḧ �����Ͻó���? : ";

		cin >> set;

		if (set == 1) {

			coin = coin - 1000;

		}

		else if (set == 2) {

			coin = coin - 800;

		}

		else if (set == 3) {

			coin = coin - 1500;

		}

		else if (set == 4) {

			coin = coin - 1300;

		}

		else {

			cout << "������ �� ���� ��ȣ�Դϴ�." << endl;

		}

		cout << coin << "��" << endl;

	}

	void setCola() {

		cout << "�� ���� ���Ͻðڽ��ϱ�? : ";

		cin >> cola;

		cout << cola << "��" << endl;

	}



};



void main() {

	Machine m1;

	m1.setCoin();

	m1.setMenu();

}