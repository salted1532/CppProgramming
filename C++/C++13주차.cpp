#include <iostream>

using namespace std;



void main()

{

	int pizza_slices = 0;

	int persons = 0;

	int slices_per_person = 0;

	try {

		cout << "피자 조각수를 입력하시오: ";

		cin >> pizza_slices;

		cout << "사람수를 입력하시오: ";

		cin >> persons;



		if (pizza_slices < 0) {

			cout << "피자조각이 음수입니다.";

		}

		else if (pizza_slices == 0) {

			cout << "피자조각이 0개임";

		}

		else {

			if (persons == 0) {

				throw persons;

			}

			else if (persons < 0) {

				cout << "사람이 음수입니다.";

			}

			else {

				slices_per_person = pizza_slices / persons;

				cout << "한사람당 피자는 " << slices_per_person << "입니다." << endl;

			}

		}

	}

	catch (int e) {

		cout << "사람이 " << e << "명 입니다." << endl;

	}

}

-- - throw 사용-- -

#include <iostream>

using namespace std;



void main()

{

	int pizza_slices = 0;

	int persons = 0;

	int slices_per_person = 0;



	cout << "피자 조각수를 입력하시오: ";

	cin >> pizza_slices;

	cout << "사람수를 입력하시오: ";

	cin >> persons;

	try {



		if (persons == 0) {

			throw persons;

		}

		if (persons < 0) {

			throw persons;

		}

		slices_per_person = pizza_slices / persons;

		cout << "한 사람당 피자는" << slices_per_person << "입니다." << endl;

	}

	catch (int e) {

		if (e < 0) {

			cout << "사람이 음수입니다.";

		}

		else {

			cout << "사람이 " << e << "명 입니다." << endl;

		}

	}

}

-- - 탬플레이트-- -

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

	cout << "템플레이트1" << endl;

	if (x > y) return x;

	else return y;

}



template<typename T, typename U>

T getmax(T x, U y) {

	cout << "템플레이트2" << endl;

	if (x > y) return x;

	else return y;

}



void main()

{

	cout << getmax(10, 20) << endl;

	cout << getmax(30, 20.3) << endl;

	cout << getmax(10.5, 12.5) << endl;

}

-- - 클래스 이용 템플레이트-- -

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

	//Box b1 (템플레이트는 타입을 알려줘야 해서 사용못함)



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