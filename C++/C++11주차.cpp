#include <iostream>

using namespace std;



class Animal {

	string str;



public:

	void speak() {

		cout << "목소리" << endl;

	}

};



class Dog : public Animal {

	string str;



public:

	void speak() {

		cout << "강아지는 멍멍" << endl;

	}

};



class Cat : public Animal {

	string str;



public:

	void speak() {

		cout << "고양이는 야옹야옹" << endl;

	}

};



void main() {

	//Dog* d1 = new Dog();

	//d1->speak();



	Animal* a1 = new Dog();

	Dog* d1 = (Dog*)a1;



	((Dog*)a1)->speak();



	a1->speak();

	d1->speak();



	delete a1;

}

가상함수

#include <iostream>

using namespace std;



class Animal {

	string str;



public:

	virtual void speak() = 0; //순수 가상함수 추상 클래스



	Animal() {

		cout << "Animal 생성자" << endl;

	}

	~Animal() {

		cout << "Animal 소멸자" << endl;

	}

};



class Dog : public Animal {

	string str;



public:

	void speak() {

		cout << "강아지는 멍멍" << endl;

	}



	Dog() {

		cout << "Dog 생성자" << endl;

	}

	~Dog() {

		cout << "Dog 소멸자" << endl;

	}

};



class Cat : public Animal {

	string str;



public:

	void speak() {

		cout << "고양이는 야옹야옹" << endl;

	}

	Cat() {

		cout << "Cat 생성자" << endl;

	}

	~Cat() {

		cout << "Cat 소멸자" << endl;

	}

};



void main() {



	//Animal* a1 = new Dog();

	//a1->speak();



	Dog* d1 = new Dog();

	d1->speak();







	Dog d;

	Animal& a1 = d;

	a1.speak();



}

홈 네트워크 구현

#include <iostream>

using namespace std;





class Television {



	int sw;



public:

	void turnOn() {

		cout << "TV전원 ON" << endl;

		sw = 1;

	}

	void turnOff() {

		cout << "TV전원 Off" << endl;

		sw = 0;

	}

	int getSw() {

		return sw;

	}

	void setSw(int sw) {

		this->sw = sw;

	}

};



class Remote : public Television {

public:

	void swCh() {

		if (getSw() == 1) {

			setSw(0);

			cout << "Remote전원 Off" << endl;



		}

		else {

			setSw(1);

			cout << "Remote전원 ON" << endl;

		}

	}



};



void main() {

	Television t1;

	t1.turnOn();



	Remote r1;

	r1.turnOn();

}

서버 홈 네트워크

#include <iostream>

using namespace std;



class Server {

public:

	virtual void turnOn() = 0;

	virtual void turnOff() = 0;

};





class Television : public Server {

public:

	void turnOn() {

		cout << "TV ON" << endl;

	}

	void turnOff() {

		cout << "TV Off" << endl;

	}

};



class Aircon : public Server {

public:

	void turnOn() {

		cout << "Air ON" << endl;

	}

	void turnOff() {

		cout << "Air Off" << endl;

	}

};



class PC : public Server {

public:

	void turnOn() {

		cout << "PC ON" << endl;

	}

	void turnOff() {

		cout << "PC Off" << endl;

	}

};



void main() {

	Server* s1 = new Television();

	Server* s2 = new Aircon();

	s1->turnOn();

	s2->turnOn();

}