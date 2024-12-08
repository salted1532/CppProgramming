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

		cout << "돈을 투입해주세요 : ";

		cin >> coin;

		cout << coin << "원" << endl;

	}

	void setMenu() {

		int set;

		cout << "1.콜라 : 1000원, 2.환타 : 800원, 3.이프로 1500원, 4.사이다 1300원" << endl;

		cout << "어떤 음료를 선택하시나요? : ";

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

			cout << "선택할 수 없는 번호입니다." << endl;

		}

		cout << coin << "원" << endl;

	}

	void setCola() {

		cout << "몇 병을 구하시겠습니까? : ";

		cin >> cola;

		cout << cola << "병" << endl;

	}



};



void main() {

	Machine m1;

	m1.setCoin();

	m1.setMenu();

}