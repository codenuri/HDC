﻿// C++
// 1. C언어의 모든 문법 포함
// 
// 2. C언어의 각 문법을 보다 발전 시킴
//    => 함수, 변수, 제어문관련 새로운 문법 추가 - 1일차

// 3. 객체지향 프로그래밍 지원 - 핵심 2일차 ~ 4일차

// 4. Generic 프로그래밍 지원 - C++ 핵심인데, 어려운 주제
//							 틈틈히 설명.. 

// 5. C++ 표준 라이브러리(미리 만들어진 함수, 클래스)사용법 익히기
//    => 5일차

// 파일 확장자
// C 언어 : .c
// C++ 언어 : .cpp 기본 (.cc, .C, .cxx 를 사용하기도 함)

// github.com/tensorflow 접속해 보세요


// 2_namespace.cpp - 교재 7 page
#include <stdio.h>

// 장점 : 프로그램의 구조를 논리적으로 분리
//       이름 충돌 등을 막을수 있다.

namespace Audio
{
	void init() { printf("Audio init\n"); }

	// Audio 관련 함수, 전역변수, 구조체등 모든 요소를 
	// 이 이름공간안에 작성
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

int main()
{
	Audio::init();
	Video::init();
}
