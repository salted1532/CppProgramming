헤더.h

#pragma once

//using namespace std; //써줘야 std::없이 사용가능



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

소스.cpp

#include <iostream>

#include "헤더.h" //개인이 만든거는 ""

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

	//~~1000줄

}



void  Car::show() {

	//~~~100줄

}

/*void sub(int n) {

	cout << "sub" << n << "입니다." << endl;

}

void sub(char n) {

	cout << "sub" << n << "입니다." << endl;

}

void sub(double n) {

	cout << "sub" << n << "입니다." << endl;

}

void sub() {

	cout << "sub 입니다."<< endl;

}

void sub(int n) {

	cout << "sub"<< n << "입니다." << endl;

}

void sub(int n, int p) {

	cout << "sub 인수 2 입니다." << endl;

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



	//cout << "C1이 죽었습니다" << endl;



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

램프 만들기

#include <iostream>



using namespace std;



class DeskLamp {

	bool isOn;

	string str;

	int light; //빛의 밝기 1 ~ 10단계

public:

	void turnOn() {

		isOn = true;

		str = "램프 ON";

	}



	void turnOff() {

		isOn = false;

		str = "램프 OFF";

		light = 0;

	}



	void setLight(int l) {

		light = l;

	}



	void view() {

		/*if (isOn == true) {

			cout << "램프 On" << endl;

		}

		else {

			cout << "램프 Off" << endl;

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