﻿// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

// 모든 사람의 공통의 특징을 먼저 설계
class Person
{
	std::string name;
	int age;
};

// 상속(inheritance)
// => 기존 타입을 확장해서 새로운 타입을 설계 하는 것

// C++   : class Student : public Person
// C#    : class Student : Person
// python: class Student(Person)
// java  : class Student extends Person

// 용어
// Person : Base(기반) class,    Super class, Parent Class
// Student: Derived(파생) class, Sub class,   Child class


class Student : public Person
{	
	int    id;
};

class Professor : public Person 
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
