//Quiz
//namespace�� �̿��Ͽ� �������� ���⸦ ����� ���ϴ�.
//�� �� a,b �Է��� �޽��ϴ�.
//����� ��ȣ +,-,/,* �Է��� �޽��ϴ�.
//namespace Calc{} �����մϴ�.
//Calc namespace���� add, sub, mul, div
//�Է°� ����� cin, cout�� ����մϴ�.

#include <iostream>

using namespace std;

namespace Calc
{
	double x=0, y=0, resVal=0;
	char symbol=' ';

	double add() { return x + y; }
	double sub() { return x - y; }
	double mul() { return x * y; }
	double div() { return x / y; }
	double result() {
		switch (symbol)
		{
		case '+':
			resVal=add();
			break;
		case '-':
			resVal=sub();
			break;
		case '*':
			resVal=mul();
			break;
		case '/':
			resVal=div();
			break;
		default:
			cout << "wrong input" << endl;
		}
		return resVal;
	}
/*
	double result;
	double calc()
	{		
		switch (symbol)
		{
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		default :
			cout << "wrong input" << endl;
		}		
		return result;
	}
	*/
}

using namespace Calc;

int main() {
	//namespace�� �����ϸ� �Լ��Ӹ� �ƴ϶� ������ �״�� ������ �� �� �ִ�.
	cout << "input (x,y) => ";
	cin >> x >> y; // x - Calc::x / y - Calc::y
	cout << "select calc => ";
	cin >> symbol; // symbol - Calc::symbol
	cout << result(); // reuslt() - Calc::result()

	return 1;
}

