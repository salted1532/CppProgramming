#include <iostream> 

using namespace std;



class Car {

	int speed = 100;

	int gear = 3;

	int turbo = 150;

public:

	int getTurbo() {

		return turbo;

	}

	Car() {

		cout << "Car ������ �Դϴ�." << endl;

	}

	Car(int speed, int gear) {

		cout << "Car �μ� 2�� ������ �Դϴ�." << endl;

		this->speed = speed;

		this->gear = gear;

	}

	~Car() {

		cout << "Car �Ҹ��� �Դϴ�." << endl;

	}

	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}

};



class SportCar : public Car {

	int turbo = 500;



public:

	int getTurbo() {

		return turbo;

	}

	SportCar() {

		cout << "SportCar ������ �Դϴ�." << endl;

	}

	SportCar(int turbo, int s, int g) : Car(s, g) {//�θ� ��� �������

		cout << "SportCar �μ� 1�� ������ �Դϴ�." << endl;

		this->turbo = turbo;

	}

	~SportCar() {

		cout << "SportCar �Ҹ��� �Դϴ�." << endl;

	}



	void show() {

		cout << "turbo = " << turbo << endl;

	}

};



void main() {

	SportCar s1;

	s1.show();

	s1.view();

	cout << s1.getTurbo() << endl;

	cout << s1.Car::getTurbo() << endl; //�θ� �������

}



-- - ���� ���-- -

#include <iostream> 

using namespace std;



class Sub1 {

	int speed = 100;



public:

	void view() {

		cout << "speed = " << speed << endl;

	}

};



class Sub2 {

	int moter = 3;



public:

	void show() {

		cout << "moter = " << moter << endl;

	}

};



class Car : public Sub1, public Sub2 {

	int gear = 1;



public:

	void aa() {

		cout << "gear = " << gear << endl;

	}

};



void main() {

	Car c1;



	c1.aa();

	c1.show();

	c1.view();

}