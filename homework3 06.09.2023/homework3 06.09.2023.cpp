#include <iostream>

using namespace std;

class Fraction {
private:
	float numerator;
	float denominator;

public:
	void Init(float a, float b) {
		numerator = a;
		denominator = b;
	}
	void InitRandom() {
		numerator = rand() % 10;
		denominator = rand() % 10;
	}
	void Print() {
		cout << numerator << ", " << denominator << endl;
	}

	// Сеттеры
	void SetNumerator(float a) {
		numerator = a;
	}
	void SetDenominator(float a) {
		denominator = a;
	}

	// Геттеры
	float GetNumerator(float a) {
		return numerator;
	}
	float GetDenominator(float a) {
		return denominator;
	}

	// Сложение
	Fraction Addition(Fraction b) {
		Fraction rez;

		rez.numerator = numerator + b.numerator;
		rez.denominator = denominator + b.denominator;

		return rez;
	}

	// Вычитание
	Fraction Subtraction(Fraction b) {
		Fraction rez;

		rez.numerator = numerator - b.numerator;
		rez.denominator = denominator - b.denominator;

		return rez;
	}

	// Умножение
	Fraction Multiplication(Fraction b) {
		Fraction rez;

		rez.numerator = numerator * b.numerator;
		rez.denominator = denominator * b.denominator;

		return rez;
	}

	// Деление
	Fraction Division(Fraction b) {
		Fraction rez;

		if (b.denominator == 0) {
			cout << "Деление на ноль невозможно!" << endl;

			rez.denominator = 0;

			return rez;
		}

		rez.numerator = numerator / b.numerator;
		rez.denominator = denominator / b.denominator;

		return rez;
	}
};

int main() {
	system("chcp 1251");
	setlocale(0, "");

	Fraction a;
	Fraction b;
	Fraction rez;

	a.Init(10, 15);
	b.Init(10, 15);

	rez = a.Addition(b);
	cout << "Сумма: ";
	rez.Print();
	cout << endl;

	a.Init(10, 15);
	b.Init(10, 15);

	rez = a.Subtraction(b);
	cout << "Вычитание: ";
	rez.Print();
	cout << endl;

	a.Init(10, 15);
	b.Init(10, 15);

	rez = a.Multiplication(b);
	cout << "Умножение: ";
	rez.Print();
	cout << endl;

	a.Init(10, 15);
	b.Init(10, 2);

	rez = a.Division(b);
	cout << "Деление: ";
	rez.Print();
	cout << endl;
   
	return 0;
}
