#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;
int main(){
	struct student{
		string name[5];
		int Id[5];
		string grade[5];
		string gender[5];
		int score[5];
		int age[5];
		
	};
	ofstream out;
	out.open ("record.txt");
	student student1;
	int i, j, k;
	for (int i = 0; i < 5 ; i++){
			cout << " please enter name : ";
			cin >> student1.name[i];
			cout << endl;
			cout << " please enter id : ";
			cin >> student1.Id[i];
			cout << endl;
			cout << " please enter score : ";
			cin >> student1.score[i];
			cout << endl;
			cout << " please enter your age : ";
			cin >> student1.age[i];
			cout << endl;
			cout << "1. female \t\t 2. male " << endl;
			cout << " please select your gender : ";
			cin >> k;
			if(k==1)
			{
				student1.gender[i] = "F";
			}
			else if(k==2)
			{
				student1.gender[i] = "M";
			}
			else {
				cout << " This is a wrong input " << endl;
			}
			if(student1.score[i] >= 80 && student1.score[i] <= 100)
			{
				student1.grade[i] = "A";
			}
			else if (student1.score[i] >= 70 && student1.score[i] <= 79)
			{
				student1.grade[i] = "B";
			}
			else if (student1.score[i] >=60 && student1.score[i] <= 69)
			{
				student1.grade[i] = "C";
			}
				else if (student1.score[i] >= 50 && student1.score[i] <= 59)
			{
				student1.grade[i] = "D";
			}
				else if (student1.score[i] >= 40 && student1.score[i] <= 49)
			{
				student1.grade[i] = "E";
			}
				else if (student1.score[i] >= 0 && student1.score[i] <= 49)
			{
				student1.grade[i] = "F";
			}
			else
			{
				cout << " your score is incorrect..please enter again! " << endl;
			}
	}
	out << "Id Number"<<setw(10)<<"Name"<<setw(12)<<"grade"<<setw(12)<<"gender"<<setw(8) <<"age" << endl;
	out << "****************************************************************************************" << endl;

	for (int i = 0; i < 5; i++)
	{
	out << student1.Id[i]<<setw(14)<<setw(12)<< student1.name[i] <<setw(10)<< student1.grade[i] <<setw(10)<< student1.gender[i]<<setw(10)<<student1.age[i]<<endl;
	}
		out << "****************************************************************************************";
return 0;
}
