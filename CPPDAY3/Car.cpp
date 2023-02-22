// Car.cpp
#include <iostream>
#include "Car.h"

// 핵심 2. static 멤버 데이타의 외부 선언은
//        헤더가 아닌 소스쪽에 포함되어야 합니다.
//        Car.cpp 에 포함
int Car::cnt = 0;


Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

void Car::go() { std::cout << "Car go" << std::endl; }

int Car::get_count() { return cnt; }