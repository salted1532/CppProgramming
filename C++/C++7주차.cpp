#include <iostream>

using namespace std;



class Car {

	int speed = 0;

	int gear = 0;



public:

	Car() {

		speed = 10;

		gear = 1;

	}

	Car(int speed, int gear) /* : speed(s), gear(g) */ {

		this->speed = speed; //this = 현재 내가 동작하고 있는 객체를 가리킨다.

		this->gear = gear;

	}

	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}

};



class Car2 {

	int speed = 0;

	int gear = 0;



public:

	Car2() {

		speed = 10;

		gear = 1;

	}

	Car2(int speed, int gear) /* : speed(s), gear(g) */ {

		this->speed = speed; //this = 현재 내가 동작하고 있는 객체를 가리킨다.

		this->gear = gear;

	}

	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}

};



/*void swap(Car* s1, Car* s2) {

	Car temp;

	temp = *s1;

	*s1 = *s2;

	*s2 = temp;

}*/



Car swap(Car s1) {

	return s1;

}



void main() {

	Car c1(50, 2), c2(100, 4);

	c2 = swap(c1);

	c1.view();

	c2.view();

}

static 변수 설명

#include <iostream>

using namespace std;



void sub() {

	int num = 0;

	static int sum; //초기화 되지 않는 변수 계속 저장됨

	num = num + 1;

	sum = sum + 1;

	cout << "num = " << num << endl;

	cout << "sum = " << sum << endl;

}



void main() {

	sub();

	sub();

	sub();

}

static 설명 2



class Car {

	int speed;

	int gear;

	static int count;



public:

	Car()

	{

		speed = 100;

		gear = 2;

		count++;

	}



	void view() {

		cout << speed << endl;

		cout << gear << endl;

		cout << count << endl;

	}

};



int Car::count = 0;



void main() {

	Car c1, c2, c3;

	c1.view();

}

주소를 이용한 클래스 사용

#include <iostream>

using namespace std;



class Car {



	int speed = 0;

	int gear = 0;



public:



	Car() {

		speed = 100;

		gear = 2;

	}



	Car(int speed, int gear) {

		this->speed = speed; //this = 현재 내가 동작하고 있는 객체를 가리킨다.

		this->gear = gear;

	}



	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}



};



void main() {



	Car objArray[3] = { Car(0,0), Car(10,3), Car(100, 5) };



	Car* p = objArray;

	for (int i = 0; i < 3; i++) {

		p->view();

		p++;

	}

}

상속

#include <iostream>

using namespace std;



class Vehcle {

	int tire;

};



class Car : public Vehcle {



	int speed = 0;

	int gear = 0;



public:



	Car() {

		speed = 100;

		gear = 2;

	}



	Car(int speed, int gear) {

		this->speed = speed; //this = 현재 내가 동작하고 있는 객체를 가리킨다.

		this->gear = gear;

	}



	void view() {

		cout << "speed = " << speed << endl;

		cout << "gear = " << gear << endl;

	}



};



class SportCar : public Car {

	int turbo = 100;



public:

	void show() {

		cout << turbo << endl;

	}

};



void main() {

	Car c1;

	c1.view();



	SportCar s1;

	s1.view();

	s1.show();

}