���.h

#pragma once

//using namespace std; //����� std::���� ��밡��



class Car {

public:

	int speed;

	int gear;

	std::string color;



	void speedUP() {

		speed = speed + 10;

	}



	void setSpeed(int s) {

		speed = speed + s;

	}



	int getSpeed() {

		return speed;

	}



	void setGear(int g, int s) {

		gear = g;

		//speed = s;

		//std::cout << gear << std::endl;

	}



	int getGear() {

		return gear;

	}



	void  view();

	void  show();

};

�ҽ�.cpp

#include <iostream>

#include "���.h" //������ ����Ŵ� ""

using namespace std;



/*class Car {

	public :

		int speed;

		int gear;

		int color;



		void speedUP() {

			speed = speed + 10;

		}



		void setSpeed(int s) {

			speed = speed + s;

		}



		int getSpeed() {

			return speed;

		}



		void setGear(int g) {

			gear = g;

		}



		int getGear() {

			return gear;

		}



		void  view();

		void  show();

};*/



void Car::view() {

	//~~1000��

}



void  Car::show() {

	//~~~100��

}

/*void sub(int n) {

	cout << "sub" << n << "�Դϴ�." << endl;

}

void sub(char n) {

	cout << "sub" << n << "�Դϴ�." << endl;

}

void sub(double n) {

	cout << "sub" << n << "�Դϴ�." << endl;

}

void sub() {

	cout << "sub �Դϴ�."<< endl;

}

void sub(int n) {

	cout << "sub"<< n << "�Դϴ�." << endl;

}

void sub(int n, int p) {

	cout << "sub �μ� 2 �Դϴ�." << endl;

}*/

void main() {

	Car c1;

	/*Car *c1 = new Car();

	c1->setSpeed(100);

	cout << c1->getSpeed() << endl;*/



	/*c1->speed = 100;

	c1->speedUP();

	cout << c1->speed << endl;*/



	//delete c1;



	//cout << "C1�� �׾����ϴ�" << endl;



	//c1.setGear(3);

	c1.speed = 100;

	c1.speedUP();

	cout << c1.speed << endl;

	cout << c1.gear << endl;



	/*sub(10);

	sub('a');

	sub(10.5);

	sub();

	sub(10);

	sub(10, 20);*/

}

���� �����

#include <iostream>



using namespace std;



class DeskLamp {

	bool isOn;

	string str;

	int light; //���� ��� 1 ~ 10�ܰ�

public:

	void turnOn() {

		isOn = true;

		str = "���� ON";

	}



	void turnOff() {

		isOn = false;

		str = "���� OFF";

		light = 0;

	}



	void setLight(int l) {

		light = l;

	}



	void view() {

		/*if (isOn == true) {

			cout << "���� On" << endl;

		}

		else {

			cout << "���� Off" << endl;

		}*/

		cout << light << endl;

		cout << str << endl;

	}

};



void main() {

	DeskLamp d1;



	d1.turnOn();

	d1.setLight(5);

	d1.view();

	d1.turnOff();

	d1.view();



}