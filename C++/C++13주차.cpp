#include <iostream>

using namespace std;



void main()

{

	int pizza_slices = 0;

	int persons = 0;

	int slices_per_person = 0;

	try {

		cout << "���� �������� �Է��Ͻÿ�: ";

		cin >> pizza_slices;

		cout << "������� �Է��Ͻÿ�: ";

		cin >> persons;



		if (pizza_slices < 0) {

			cout << "���������� �����Դϴ�.";

		}

		else if (pizza_slices == 0) {

			cout << "���������� 0����";

		}

		else {

			if (persons == 0) {

				throw persons;

			}

			else if (persons < 0) {

				cout << "����� �����Դϴ�.";

			}

			else {

				slices_per_person = pizza_slices / persons;

				cout << "�ѻ���� ���ڴ� " << slices_per_person << "�Դϴ�." << endl;

			}

		}

	}

	catch (int e) {

		cout << "����� " << e << "�� �Դϴ�." << endl;

	}

}

-- - throw ���-- -

#include <iostream>

using namespace std;



void main()

{

	int pizza_slices = 0;

	int persons = 0;

	int slices_per_person = 0;



	cout << "���� �������� �Է��Ͻÿ�: ";

	cin >> pizza_slices;

	cout << "������� �Է��Ͻÿ�: ";

	cin >> persons;

	try {



		if (persons == 0) {

			throw persons;

		}

		if (persons < 0) {

			throw persons;

		}

		slices_per_person = pizza_slices / persons;

		cout << "�� ����� ���ڴ�" << slices_per_person << "�Դϴ�." << endl;

	}

	catch (int e) {

		if (e < 0) {

			cout << "����� �����Դϴ�.";

		}

		else {

			cout << "����� " << e << "�� �Դϴ�." << endl;

		}

	}

}

-- - ���÷���Ʈ-- -

#include <iostream>

using namespace std;



//int getmax(int x, int y) {

//	if (x > y) return x;

//	else return y;

//}



//double getmax(double x, double y) {

//	if (x > y) return x;

//	else return y;

//}



template<typename T>

T getmax(T x, T y) {

	cout << "���÷���Ʈ1" << endl;

	if (x > y) return x;

	else return y;

}



template<typename T, typename U>

T getmax(T x, U y) {

	cout << "���÷���Ʈ2" << endl;

	if (x > y) return x;

	else return y;

}



void main()

{

	cout << getmax(10, 20) << endl;

	cout << getmax(30, 20.3) << endl;

	cout << getmax(10.5, 12.5) << endl;

}

-- - Ŭ���� �̿� ���÷���Ʈ-- -

#include <iostream>

using namespace std;



template<typename T>

class Box {

	int speed = 50;

	T data;



public:

	void setData(T data) {

		this->data = data;

	}

	T getData() {

		return data;

	}

};





void main()

{

	//Box b1 (���÷���Ʈ�� Ÿ���� �˷���� �ؼ� ������)



	Box<int> b1;

	b1.setData(100);

	cout << b1.getData() << endl;



	Box<double> b2;

	b2.setData(100.33);

	cout << b2.getData() << endl;



	Box<string> b3;

	b3.setData("apple");

	cout << b3.getData() << endl;

}

-- - stl-- -

#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;



template<typename T>

int is_even(const T& num) {

	return (num % 2) == 0;

}



void main()

{

	vector <int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int num = count_if(vec.begin(), vec.end(), is_even<int>);



	cout << "num = " << num << endl;

}