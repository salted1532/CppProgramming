# CppProgramming
C++프로그래밍기초 수업내용

2022-1학기-박병준-C++프로그래밍기초

| 항목 | 내용 |
|:----:|:-----|
| 🎓 과목명 | C++ 프로그래밍 기초 |
| 🏫 담당 교수 | 박병준 교수님 |
| 🗓️ 수강 학기 | 2022-1학기 |
| 💡 주요 학습 내용 | C++ |
| 🧰 도구 | Visual Studio |
| 🧩 과제 / 프로젝트 | 음료수 자판기 만들기 |
| 🔗 관련 자료 | [노트 보기](./notes/README.md) / [과제 코드](./assignments/) |
---
## 목차

1. 2~3주차: 배열, 포인터, 클래스 기초
2. 5주차: 헤더파일, 동적 객체, 램프 예제
3. 6주차: 생성자, 소멸자, 복사 생성자
4. 7주차: this, static, 상속, 객체 배열
5. 8주차: 가상함수, 추상클래스, 다형성
6. 9주차: 배열, 포인터, 입력 연습
7. 10주차: 디버깅 실습
8. 11주차: 다형성 심화, 홈 네트워크 예제
9. 13주차: 예외 처리, 템플릿, STL
10. 기말고사: 자판기 프로젝트

## 2~3주차 – 배열, 포인터, 클래스 기초
### 학습 내용

- 배열 선언과 초기화

- 포인터 기본 사용

- cin, cout, printf 입출력

- 클래스 기초: 멤버 변수, 멤버 함수, 접근 지정자

- 객체 생성 후 함수 호출

```예시 코드
int num[5] = { 10,20,30,40,50 }, *p, *a;
p = num;
a = &num[3];

cout << *p << endl;       // 10
cout << *(p + 1) << endl; // 20
cout << p[2] << endl;     // 30
```

```클래스 예제:

class Car {
public:
    int speed;
    void speedCh() { speed += 10; }
};

int main() {
    Car c1;
    c1.speed = 50;
    c1.speedCh();
    cout << c1.speed << endl; // 60
}
```
---
## 5주차 – 헤더파일, 동적 객체, 램프 예제
### 학습 내용

- 클래스 헤더(.h)와 구현(.cpp) 분리

- 동적 객체 생성: new, 소멸: delete

-램프(Lamp) 예제

```예시 코드
class DeskLamp {
    bool isOn;
    int light;
public:
    void turnOn() { isOn = true; light = 5; }
    void turnOff() { isOn = false; light = 0; }
    void view() { cout << "light = " << light << endl; }
};

int main() {
    DeskLamp d1;
    d1.turnOn();
    d1.view(); // 5
    d1.turnOff();
    d1.view(); // 0
}
```
---
## 6주차 – 생성자, 소멸자, 복사 생성자
### 학습 내용

- 기본 생성자, 매개변수 생성자

- 소멸자: 객체 소멸 시 호출

- 복사 생성자

- 객체 내부 객체 사용

```예시 코드
class Car {
    int speed, gear;
public:
    Car(int s, int g) : speed(s), gear(g) {}
    Car(const Car& obj) : speed(obj.speed), gear(obj.gear) {}
    void view() { cout << speed << " " << gear << endl; }
};

int main() {
    Car c1(100, 5);
    Car c2(c1); // 복사 생성자
    c2.view();  // 100 5
}
```
---
## 7주차 – this, static, 상속, 객체 배열
### 학습 내용

- this 포인터: 현재 객체 참조

- static 변수: 클래스 전체에서 공유

- 객체 배열과 포인터 접근

- 상속, 다중 상속

- swap 함수 및 값 복사

```예시 코드
class Car {
    int speed, gear;
    static int count;
public:
    Car() { speed=100; gear=2; count++; }
    void view() { cout << speed << " " << gear << " " << count << endl; }
};
int Car::count = 0;

int main() {
    Car c1, c2;
    c1.view(); // 100 2 2
}
```

```배열을 이용한 객체 접근:

Car objArray[3] = { Car(0,0), Car(10,3), Car(100,5) };
Car* p = objArray;
for(int i=0;i<3;i++){ p->view(); p++; }
```
## 8주차 – 가상함수, 추상클래스, 다형성
### 학습 내용

- 가상함수(virtual)와 순수 가상함수(=0)

- 추상 클래스, 런타임 다형성

- 부모 클래스 함수 호출

```예시 코드
class Animal { 
public: 
    virtual void speak() = 0; 
};

class Dog : public Animal {
public:
    void speak() { cout << "멍멍" << endl; }
};

int main() {
    Animal* a1 = new Dog();
    a1->speak(); // 멍멍
}
```
---
## 9주차 – 배열, 포인터, 입력 연습

- 2주차 복습, 동적 배열 연습

- 입력값과 출력 확인

- 포인터를 통한 배열 요소 접근
```
int num[10] = {10,20,30,40,50,60,70,80,90,100};
for(int i=0;i<10;i++){
    if(i%2==0) num[i]+=i;
    cout << num[i] << endl;
}
```
---
## 10주차 – 디버깅 실습

- 연산, 함수, 객체 생성, 동적 배열

- 디버깅을 통한 변수 상태 확인
```
int n1=10, n2=20;
int sum = n1+n2;
sum += n2;
cout << sum << endl; // 50
```
---
## 11주차 – 다형성 심화, 홈 네트워크 예제
### 학습 내용

- 상속과 함수 재정의

- 가상함수 활용

- 홈 네트워크 시뮬레이션

- 서버 인터페이스 다형성

class Server { public: virtual void turnOn()=0; };
class Television : public Server {
public: void turnOn(){cout<<"TV ON"<<endl;}
};

int main() {
    Server* s1 = new Television();
    s1->turnOn(); // TV ON
}

13주차 – 예외 처리, 템플릿, STL
학습 내용

예외 처리: try, catch, throw

함수 및 클래스 템플릿

STL(vector, algorithm)

template<typename T>
T getmax(T x, T y){ return (x>y)?x:y; }

cout << getmax(10,20) << endl; // 20

vector<int> vec={1,2,3,4,5};
int num = count_if(vec.begin(), vec.end(), [](int n){return n%2==0;});
cout << num << endl; // 2

기말고사 – 자판기 프로젝트
학습 내용

자판기 시뮬레이션

멤버 변수: 금액, 음료 종류

함수:

setCoin(): 돈 입력

setMenu(): 메뉴 선택 및 금액 차감

setCola(): 구매 수량 입력

예시 코드
Machine m1;
m1.setCoin(); // 돈 투입
m1.setMenu(); // 메뉴 선택
