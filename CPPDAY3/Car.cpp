// Car.cpp
#include <iostream>
#include "Car.h"

// �ٽ� 2. static ��� ����Ÿ�� �ܺ� ������
//        ����� �ƴ� �ҽ��ʿ� ���ԵǾ�� �մϴ�.
//        Car.cpp �� ����
int Car::cnt = 0;


Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

void Car::go() { std::cout << "Car go" << std::endl; }

int Car::get_count() { return cnt; }