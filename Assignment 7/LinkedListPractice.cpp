#include <iostream>

using namepace std;


struct Student{

	char Name[20];
	int StudentNum;
	int time;

};

struct Appointment{

	const Student* std;
	Appointment* next;

}

void print(Appointment* &a){

	cout << endl;

	if (a == '\0'){

		cout << "The list is empty" << endl;
		return;
	}

	Appointment* temp = a;

	else {

		cout << temp->std->name << ' ' << temp->std->StudentNum << ' ' << temp->std->time << endl;
		temp = temp->next;

	}

	cout << endl;
}

int main() {

	const Student s1 = { "Helen", 20114532, 1430 };
	const Student s2 = { "Jo", 20142879, 1300 };
	const Student s3 = { "Ahmed", 20126409, 1625 };

	Appointment* node1 = new Appointment;
	const Student* s = &s2

	return 0;
}