#include "class_studentscore/StudentScore.h"

int main()
{
	ios::sync_with_stdio(false); //stdio / iostream syncronhization
	cin.tie(NULL);
	cout.tie(NULL); //stream(buffer)of cin and cout splited

	string Name;
	string subject;
	int score;
	char input_CQ = ' ';
	vector <StudentScore> vStudentScore;
	do {
		StudentScore newStudentScore;
		cout << "�̸� �Է� => ";
		cin >> Name;
		newStudentScore.SetStudentName(Name);

		while (1) {
			cout << "���� �Է� => ";
			cin >> subject;
			if (subject == "Q") break;
			cout << "���� �Է� => ";
			cin >> score;
			newStudentScore.SetSubjectScore(subject, score);			
		}		
		newStudentScore.GetSum();
		newStudentScore.GetAvg();
		newStudentScore.GetMin();
		newStudentScore.GetMax();
		vStudentScore.push_back(newStudentScore);
		cout << "Continue : C / Quit : Q => ";
		cin >> input_CQ;
	} while (input_CQ != 'Q');

	for (size_t i = 0; i < vStudentScore.size(); i++)
	{
		vStudentScore[i].DoCalc();
	}

	if (input_CQ == 'Q')
	{
		vStudentScore.clear();
	}
	return 0;
}