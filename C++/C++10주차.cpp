//C++ 10���� <�����>

#include <iostream>

using namespace std;



void main() {

	int n1 = 10, n2 = 20;

	int sum = 0;



	sum = n1 + n2; //���� ���� ��� ���(���̺귯��(LIB), DLL..)



	sum += n2;//���� ����



	cout << "sum = " << sum << endl;

}

//C++ 10���� <�����2>

#include <iostream>

using namespace std;



int methodA(int a) {

	return a + 100;

}

int methodB() {

	return -200;

}

int methodC(int a, int b) {

	int c = 0;

	if (a < b) {

		return a;

	}

	else {

		return c;

	}

}

int main() {

	int num1 = 7;

	int num2 = methodA(num1);

	int num3 = methodB();

	int num4 = methodC(num2, num3);

	int num5 = methodC(num3, num2);

}

//C++ 10���� <�����3>

#include <iostream>

using namespace std;



int main() {

	int num[10] = { 10, 20, 30, 40 ,50 ,60 ,70,80,90,100 };

	int* pnum = new int[10];



	for (int i = 0; i < 10; i++) {

		if (i % 2 == 0) {

			num[i] = num[i] + i;

			cout << "num[" << i << "] = " << num[i] << endl;

		}

	}



	cout << num[3] << endl;



}

//C++ 10���� <�����4>

#include <iostream>

using namespace std;



class Car {

	int speed;

	int gear;



public:

	Car() {

		cout << "������ �Դϴ�." << endl;

	}

	~Car() {

		cout << "�Ҹ��� �Դϴ�." << endl;

	}

	void setSpeed(int s) {

		speed = s;

	}

	void setgear(int gear) {

		this->gear = gear;

	}

	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}

};



int main() {

	Car c1;



	c1.setSpeed(100);

	c1.setgear(3);

	c1.view();

}