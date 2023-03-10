#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


typedef struct Fraction {
	int numerator;
	int denominator;
	void printFrac() {}

}Frac;

void printFrac(Frac *a) {
	cout << "분수의 분자는 " << (*a).numerator << " 이고 " << " 분수의 분모는 " << (*a).denominator << " 입니다." << endl;
}

int gcd(int a, int b)           //최대 공약수 구하는 함수    
{
	int c;
	while (b != 0) {

		c = a % b;

		a = b;
		b = c;

	}

	return a;
}   

void reduce(Frac *a)         // 약분하는 함수
{
	int gcd_result = gcd((*a).numerator, (*a).denominator);

	int numerator_result = (*a).numerator / gcd_result;     // 최대공약수로 약분한 후의 분자
	int denominator_result = (*a).denominator / gcd_result;    // 최대공약수로 약분한 후의 분모

	(*a).numerator = numerator_result;
	(*a).denominator = denominator_result;
}

Frac add(Frac a, Frac b)       // 분수끼리 더하는 함수   
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator + a.denominator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac * c);

	return *c;
}

Frac minus(Frac a, Frac b)        //분수끼리 빼는 함수
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator - a.denominator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac * c);

	return *c;
}

Frac multi(Frac a, Frac b)       //분수끼리 곱하는 함수
{
	Frac* c={};
	(*c).numerator = a.numerator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac *c);
	return  * c;
}

Frac div(Frac a, Frac b)          //분수끼리 나누는 함수
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator;
	(*c).denominator = a.denominator * b.numerator;
	void reduce(Frac * c);

	return *c;
}

Frac scan(Frac *array)       // 쌍둥이 배열을 복사 반환하는 함수
{
	Frac *arrayB={};
	int i;
	for (i = 0; i < 5; i++)
	{
		arrayB[i] = array[i];
	}

	return *arrayB;
}

Frac sum(Frac *array, Frac *arrayb)
{
	int i;
	int k;
	int n = 0;
	Frac* f = {};
	for (k = 0; ;k++)
	{
		if (array[k].numerator != 0)
			n++;
		else
			break;
	}
	Frac* summ = {};
	Frac *c={};
	for (i = 0; i < n; i++)
	{
		c[i] = multi( array[i], arrayb[i]);
	}

	summ[0] = add(c[0], c[1]);

	for (i = 2; i < n; i++)
	{
		summ[i - 1] = add(summ[i - 1], c[i]);
	}

	(*f).numerator = summ[n - 2].numerator;
	(*f).denominator = summ[n - 2].denominator;

	cout << "분수의 분자는 " << (*f).numerator << " 이고 분수의 분모는 " << (*f).denominator << " 입니다. " << endl;

	return *f;
}

int main()
{
	int i;
	Frac arrayA[4];
	Frac arrayB[4];

	for (i = 0; i < 5; i++)
	{
		cout << "분자의 값을 입력하시오: ";
		cin >> arrayA[i].numerator;

		cout << "분모의 값을 입력하시오: ";
		cin >> arrayA[i].denominator;
	}

	Frac sum(Frac * arrayA, Frac scan(Frac * arrayA));
}