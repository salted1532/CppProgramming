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

		cout << "프로그램 시작" << endl;

		speed = 100;

		gear = 3;

	}



	Car(int m) : Max(m) {

		cout << "프로그램 시작" << endl;

		speed = 100;

		gear = 3;

	}



	Car(int s, int g) : speed(s), gear(g) {

		cout << "프로그램 시작" << endl;

	}



	~Car() {

		cout << speed << " = 프로그램 종료" << endl;

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

//클래스 *객체 = 예약어 생성자

	/*Car* c2 = new Car(100);

	c2->view();

	Car c1(50);

	delete c2; //동적할당 소멸

	c1.view();*/



	Car c1(300);

	c1.view();

	Car c2(50, 2);

	c2.view();



}

- 객체에서 객체 사용 -

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

- 복사 생성자 -

#include <iostream>

using namespace std;



class Car {

	int speed;

	int gear;

public:

	Car() {



	}



	Car(int s, int g) : speed(s), gear(g) {

		cout << "생성자 호출" << endl;

	}



	Car(const Car& obj) : speed(obj.speed), gear(obj.gear) {

		//제어, 로그인, 제약, 다른 데이터와 이상이 없는지 무결성 가능

		cout << "복사 생성자 호출" << endl;

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