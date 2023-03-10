#include <iostream>
#include <time.h>
using namespace std;

//int main() {
//	bool b;
//	b = (1 == 2);
//
//	cout << std::boolalpha;
//	cout << b << endl;
//
//	return 0;
//}

//int main() {
//
//	int x, y;
//	cout << "x값을 입력하시오: ";
//	cin >> x;
//	cout << "y값을 입력하시오: ";
//	cin >> y;
//
//	if (x > y)
//		cout << "x가 y보다 큽니다.";
//	else if (y > x)
//		cout << "y가 x보다 큽니다.";
//	else
//		cout << "같은 수 입니다.";
//	
//	return 0;
//}

//int main() {
//
//	int age;
//	cout << "나이를 입력하시오: ";
//	cin >> age;
//
//	if (age >= 20)
//		cout << "성인입니다.";
//	else if (age < 12)
//		cout << "어린이입니다.";
//	else
//		cout << "청소년입니다.";
//
//	return 0;
//}

//int main() {
//
//	char secret = 'g';
//	char user;
//
//	    cout << "비밀코드를 맞춰보세요: ";
//		cin >> user;
//
//		if (user > secret)
//			cout << user << "앞에 있음" << endl;
//		else if (user < secret)
//			cout << user << "뒤에 있음" << endl;
//		else
//			cout << "정답입니다.";
//	
//}

//int main() {
//
//	int i;
//
//	for (i = 10; i >= 0; i--)
//		cout << i << " " ;
//
//	cout << "발사 !";
//}

//int main() {
//
//	int num;
//	cout << "구구단 중에서 출력하고 싶은 단을 입력하시오: ";
//	cin >> num;
//	int i;
//	
//	for (i = 1; i <= num; i++)
//	{
//		cout << num << " + " << i << " = " << num + i<<endl;
//	}
//
//	return 0;
//}

//int main() {
//
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//		sum += i;
//	cout << "1부터 10까지의 정수의 합 = " << sum;
//
//	return 0;
//}

//int main() {
//	int num;
//	cout << "정수를 입력하시오: ";
//	cin >> num;
//	int  i;
//	int s = 1;
//	for (i = 1; i <= num; i++)
//	{
//		s *= i;
//	}
//
//	cout << num << "!은 " << s << "입니다.";
//
//	return 0;
//}

//int main() {
//	char word;
//	int apple = 0;
//	int mango = 0;
//	cout << "영문자를 입력하고 콘트롤-Z를 치세요"<<endl;
//
//	while (1)
//	{
//		cin >> word;
//
//		if ((word == 'a') || (word == 'e') || (word == 'o') || (word == 'i') || (word == 'u'))
//			apple++;
//		else 
//			mango++;
//	}
//
//	cout << "모음: " << apple<<endl;
//	cout << "자음: " << mango;
//
//	return 0;
//}

//int main() 
//{
//	int apple = 0, mango = 0;
//	char word;
//
//	cout << "영문자를 입력하고 콘트롤 - Z를 치세요 : " << endl;
//	while (cin >> word) {
//		switch (word)
//		{
//		case 'a':
//		case'e':
//		case'o':
//		case'i':
//		case'u':
//			apple++;
//			break;
//		default:
//			mango++;
//			break;
//		}
//	}
//
//	cout << "모음: " << apple << endl;
//	cout << "자음: " << mango << endl;
//
//	return 0;
//}

//int main() {
//	int user;
//	int answer = rand()%100;
//	int i;
//
//	for (i = 1;; i++)
//	{
//		cout << "정답을 추측하여 보시오: ";
//		cin >> user;
//
//		if (user > answer)
//			cout << "제시한 정수가 높습니다."<<endl;
//		else if (user < answer)
//			cout << "제시한 정수가 낮습니다."<<endl;
//		else
//		{
//			cout << "축하합니다. 시도 횟수 = " << i << endl;
//			break;
//		}
//	}
//}

//int main() {
//
//	srand(time(NULL));
//
//	int num = rand() % 100;
//	int num2 = rand() % 100;
//	int num3 = rand() % 4 + 1;
//	char r;
//	int result;
//	int user;
//
//	cout << "산수 문제를 자동으로 출제합니다." << endl;
//	cout << num;
//	if (num3 == 1)
//	{
//		r = '+';
//		result = num + num2;
//	}
//	else if (num3 == 2)
//	{
//		r = '-';
//		result = num - num2;
//	}
//	else if (num3 == 3)
//	{
//		r = '*';
//		result = num * num2;
//	}
//	else
//	{
//		r = '/';
//		result = num / num2;
//	}
//	cout << r << num2 << "=";
//	cin >> user;
//
//	if (user == result)
//		cout << "맞았습니다.";
//	else
//		cout << "틀렸습니다.";
//
//	return 0;
//}

//int main() {
//
//	srand(time(NULL));
//	int i;
//	int list[10];
//	for (i = 0; i < 10; i++)
//	{
//		list[i] = rand() % 100 + 1;
//	}
//	int large = list[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (large < list[i])
//		{
//			large = list[i];
//		}
//	}
//	for (int k : list)
//	{
//		cout << k << " ";
//	}
//	cout << endl<<"최대값= " << large << endl;
//	return 0;
//}

//int main() {
//
//	int list[9][9];
//	int i, k;
//
//	for (i = 0; i < 9; i++)
//		list[i][0] = i+1;
//
//	for (i = 0; i < 9; i++)
//		for (k = 0; k < 9; k++)
//		{
//			list[i][k] = list[i][0] * (k + 1);
//		}
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = 0; k < 9; k++)
//		{
//			cout << list[i][k] << ", ";
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}



