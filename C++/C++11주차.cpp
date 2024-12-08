#include <iostream>

using namespace std;



class Animal {

	string str;



public:

	void speak() {

		cout << "��Ҹ�" << endl;

	}

};



class Dog : public Animal {

	string str;



public:

	void speak() {

		cout << "�������� �۸�" << endl;

	}

};



class Cat : public Animal {

	string str;



public:

	void speak() {

		cout << "����̴� �߿˾߿�" << endl;

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

�����Լ�

#include <iostream>

using namespace std;



class Animal {

	string str;



public:

	virtual void speak() = 0; //���� �����Լ� �߻� Ŭ����



	Animal() {

		cout << "Animal ������" << endl;

	}

	~Animal() {

		cout << "Animal �Ҹ���" << endl;

	}

};



class Dog : public Animal {

	string str;



public:

	void speak() {

		cout << "�������� �۸�" << endl;

	}



	Dog() {

		cout << "Dog ������" << endl;

	}

	~Dog() {

		cout << "Dog �Ҹ���" << endl;

	}

};



class Cat : public Animal {

	string str;



public:

	void speak() {

		cout << "����̴� �߿˾߿�" << endl;

	}

	Cat() {

		cout << "Cat ������" << endl;

	}

	~Cat() {

		cout << "Cat �Ҹ���" << endl;

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

Ȩ ��Ʈ��ũ ����

#include <iostream>

using namespace std;





class Television {



	int sw;



public:

	void turnOn() {

		cout << "TV���� ON" << endl;

		sw = 1;

	}

	void turnOff() {

		cout << "TV���� Off" << endl;

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

			cout << "Remote���� Off" << endl;



		}

		else {

			setSw(1);

			cout << "Remote���� ON" << endl;

		}

	}



};



void main() {

	Television t1;

	t1.turnOn();



	Remote r1;

	r1.turnOn();

}

���� Ȩ ��Ʈ��ũ

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