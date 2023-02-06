#pragma once
#include <iostream>


class Top {
public:
	Top() {
		std::cout << "Constructor Top(). " << std::endl;
	}
	int getMethod() {
		return _method;
	}
	int _method = 1;
};

class FirstDerived : public virtual Top {
public:
	FirstDerived() {
		std::cout << "Constructor FirstDerived(). " << std::endl;
	}
	int getMethod() {
		return _method;
	}
};


class SecondDerived : public virtual Top {
public:
	SecondDerived() {
		std::cout << "Construtor SecondDerived(). " << std::endl;
	}
	int getMethod() {
		return _method;
	}
};


class LastDerived : public FirstDerived, public SecondDerived {
public:
	LastDerived() {
		std::cout << "Constructor LastDerived(). " << std::endl;
	}
	int getMethod() {
		return _method;
	}
};
