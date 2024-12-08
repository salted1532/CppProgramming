#include <iostream>

using namespace std;



class Car {//객체에서 변수(데이터)와 함수등 합쳐진게 캡슐화

public: //protected(상황에따라), private(접근불가)

	int c;

	string color;

	int speed;

	int gear;



	void speedCh() {

		speed = speed + 10;

	}



	void speedUp(int s) {

		speed = s;

		speedLock(speed);

	}



	void speedLock(int s) {

		if (s > 100) {

			speed = 100;

		}

		else if (s < 0) {

			speed = 0;

		}

		else {

			speed = speed;

		}

	}



	void gearCh(int g) {

		gear = g;

	}



	int getSpeed() { //인증

		return speed;

	}



	void show() {

		cout << speed << endl;

		cout << gear << endl;

		cout << color << endl;



	}



	void speedStop() {

		speed = 0;

	}



	void colorCh(int c) { // 0 = black 1 = red 2 = white 3 = yellow ...

		if (c == 0) {

			color = "black";

		}

		else if (c == 1) {

			color = "red";

		}

		else if (c == 2) {

			color = "white";

		}

		else {

			color = "yellow";

		}

	}

};



void main() {

	Car c1;

	c1.colorCh(2);

	c1.speedUp(-110);

	c1.speedCh();

	c1.speedLock(c1.speed);

	c1.gearCh(2);

	c1.speedStop();

	c1.show();



	cout << "\n" << endl;

	cout << c1.color << endl;

	cout << c1.speed << endl;

	cout << c1.gear << endl;

	cout << c1.getSpeed() << endl;

}