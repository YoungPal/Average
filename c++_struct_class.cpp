//struct
//class

#include <iostream>
#include <stdio.h>
#include <vector>

enum {
	eEnglish,  //0
	eMath,	   //1
	eKorean,   //2
	eClassMax  //3
} ECLASS;


/*
enum {
	eEnglish,  //0
	eMath=5,   //1->5
	eKorean,   //2->6
	eClassMax  //3->7
} ECLASS; //���ڸ� ���ȭ ���ѳ��� Ÿ��?
		  //���� �迭�� ũ�⸦ ������ �� ���?
		  //�ݺ������� �迭�� �ִ� ũ�⸦ �迭[eClassMax]�� ������ ��� eClassMax�� ����� �� �ִ�.
*/
struct _stStudentInfo
{
	//int eng, math, kor;
	int scores[eClassMax];
	std::string Name;
	//0 - english
	//1 - math
	//2 - Korean
	int sum, min, max;
	float average;
};
/*
sti.scores[eEnglish] = 5; //eEnglish�� �ش� index��ȣ�� ��������ʰ� �������� �Ǵ����� ���� ������ �� �ִ�.
scores[eKorean] = 3;
*/


int sum(int* scores, int length) {
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		result += scores[i];
	}
	return result;
}
float average(int* scores, float length, float sum) {
	return sum / length;
}
int min(int* scores, int length) {
	int result = scores[0];
	for (size_t i = 1; i < length; i++) {
		if (result > scores[i]) result = scores[i];
	}

	return result;
}
int max(int* scores, int length) {
	int result = scores[0];
	for (size_t i = 1; i < length; i++) {
		if (result < scores[i]) result = scores[i];
	}
	return result;
}
void display(_stStudentInfo* ptr) {
	std::cout << "[" << ptr->Name << "]" << std::endl;
	std::cout << "english - " << ptr->scores[0] << ", math - " << ptr->scores[1] << ", korea - " << ptr->scores[2] << std::endl;
	std::cout << "sum - " << ptr->sum << ", average - " << ptr->average << ", min - " << ptr->min << ", max - " << ptr->max << std::endl<<std::endl;
}

void Calc(_stStudentInfo* ptr)
{
	int length = eClassMax;
	ptr->sum=sum(ptr->scores, length);
	ptr->average=average(ptr->scores, length, (float)ptr->sum);
	ptr->min=min(ptr->scores, length);
	ptr->max=max(ptr->scores, length);
}

int main() {
	_stStudentInfo student;
	student.Name = "JYH";
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	Calc(&student);
	display(&student);
	
	int input_scores[eClassMax] = { 0, };
	char input_CQ;

	std::vector<_stStudentInfo> vStudents;

	do {
		_stStudentInfo newStudent;
		
		std::cout << "Continue : C, Quit : Q => ";
		std::cin >> input_CQ;
		std::cout << "input_Name => ";
		std::cin >> newStudent.Name;
		std::cout << "input_socres(english/math/korean) : ";
		for (size_t i = 0; i < eClassMax; i++)
		{
			std::cin >> input_scores[i];
			newStudent.scores[i] = input_scores[i];
		}
		Calc(&Student);
		
	} while (input_CQ != 'Q');



	//1��
	//�Լ� ...sum, average, min, max
	//@para scores[], length
	//return ...sum(int), average(float), min/max(int)

	//display
	// [�̸�]
	//english - ??, math - ??, korea -??
	//sum - ??, average - ??, min - ??, max - ??

	//2�� - �ڵ����� �Է� �� ���� ���� ���
	//����ڷκ��� �Է��� �޽��ϴ�.
	//struct�� string name�� �Է�
	//�� eng, math, kor ������ �Է�
	//�� display�� ����� �մϴ�.
	//Q�Է��� ������ �� �̻� �Է��� ���� �ʽ��ϴ�.
}
