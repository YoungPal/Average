//struct
//class
#include<iostream>
#include<stdio.h>
#include <vector>
#include <string>

//�л�����-����
enum  {
	eEnglish,	//0
	eMath,		//eMath=5, 1->5
	eKorean,	//2->6
	eClassMax	//6->7
} ECLASS;
struct _stStudentInfo
{
	//int eng, math, kor;
	int scores[eClassMax];
	//0 - english
	//1 - math
	//2 - Korean
	int sum, min, max;
	float average;
};
//1?...50...�ϵ��ڵ�???
//scores[eEnglish] = 5;
//scores[eKorean] = 3;
//for (size_t score = 0; score < eClassMax; score++)





int main()
{
	/*
	if (0)
	{
		//namspace
		//{
		//}
		typedef unsigned char uchar;//����� Ÿ�� ������
		typedef unsigned int uint;
		class MyClass
		{
		};
		//����ü, struct ......Class   ..... 
		//struct(public) == class(private,protected,public) ? ....1���� ������
		struct _stData
		{
			//���� �ٸ� ������ ������ �׸��� �����Ͽ�
			//�ϳ��� ������ ������ [������ Ÿ��]
			int score;
			double ratio;
			std::string name;
			int datas[100];
			int* pPreData = nullptr;
			int* pPostData = nullptr;
			std::vector<int> vLines;
			//�Լ�
			void sum(int& a, int& b) { return a + b; }
			//Ŭ����
			MyClass _myClass;
		};
		int a;
		_stData stData = { 10, 0.1, "hello", nullptr, nullptr };
		_stData* pstData = new _stData;// nullptr;
		//c
		//typedef struc[tagName]
		//{
		//	//����Ÿ��
		//}[nickname];
		typedef struct _stDataC
		{
			int a;
			int b;
		}STDATAC;

		//useage
	}
	*/

	_stStudentInfo student;
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	//1��
	//�Լ� ... sum, average, min, max
	//input scores[], length
	//return ... sum(int), average(float), min/max(int)

	//display
	//english - ??, math - ??, korea - ??
	//sum - ??, average - ??, min - ??, max - ??

	//2�� - �ڵ����� �Է� �� ���� ���� ���
	//����ڷκ��� �Է��� �޽��ϴ�.
	//struct�� string name�� �Է� �޾ƿ�.
	//�� eng, math, kor ������ �Է� �޾ƿ�
	//�� display�� ����� �մϴ�.
	//Q�Է��� ������ �� �̻� �Է��� ���� �ʽ��ϴ�.
}







