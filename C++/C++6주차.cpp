#include <iostream>

using namespace std;



class Car {

	int speed = 0;

	int gear = 0;

	string color = "";

	const int Max = 100;

	int* pa = new int[100];



public:

	Car() : Max(300) {

		cout << "���α׷� ����" << endl;

		speed = 100;

		gear = 3;

	}



	Car(int m) : Max(m) {

		cout << "���α׷� ����" << endl;

		speed = 100;

		gear = 3;

	}



	Car(int s, int g) : speed(s), gear(g) {

		cout << "���α׷� ����" << endl;

	}



	~Car() {

		cout << speed << " = ���α׷� ����" << endl;

		delete[] pa;

	}



	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

		cout << "Max = " << Max << endl;

	}

};



void main() {

	//Car *c1 = new Car();

//Ŭ���� *��ü = ����� ������

	/*Car* c2 = new Car(100);

	c2->view();

	Car c1(50);

	delete c2; //�����Ҵ� �Ҹ�

	c1.view();*/



	Car c1(300);

	c1.view();

	Car c2(50, 2);

	c2.view();



}

- ��ü���� ��ü ��� -

#include <iostream>

using namespace std;



class Point {

	int x, y;

public:

	Point(int a, int b) : x(a), y(b) {



	}

};



class Rectangle {

	Point p1, p2;



public:

	Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) {

	}

};





void main() {



}

- ���� ������ -

#include <iostream>

using namespace std;



class Car {

	int speed;

	int gear;

public:

	Car() {



	}



	Car(int s, int g) : speed(s), gear(g) {

		cout << "������ ȣ��" << endl;

	}



	Car(const Car& obj) : speed(obj.speed), gear(obj.gear) {

		//����, �α���, ����, �ٸ� �����Ϳ� �̻��� ������ ���Ἲ ����

		cout << "���� ������ ȣ��" << endl;

	}



	void view() {

		cout << speed << endl;

		cout << gear << endl;

	}

};



void main() {

	Car c1(100, 5);

	c1.view();



	Car c2(c1);

	c2.view();



	Car c3;

	c3.view();

	c3 = c1;

	c3.view();

}