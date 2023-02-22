// Car.h
#pragma once

class Car
{
	int color;
	int speed;

	static int cnt;

public:
	Car();
	~Car();

	void go();

	// 핵심 1. static 멤버 함수는 선언과 구현으로 분리시
	//		  선언에만 static 을 표기 합니다.
	static int get_count();
}; 
