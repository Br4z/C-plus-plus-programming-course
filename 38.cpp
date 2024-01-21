/** Video 93
 * This program asks the user for their name and age, stores the data in a struct, and then prints
 * it out.
 */
#include <iostream>

using namespace std;


struct Person {
	char name[20];
	int age;
};


void askData(Person*);
void printData(Person*);


int main() {
	Person person;
	Person* personP = &person;

	askData(personP);
	printData(personP);

	return 0;
}


void askData(Person* personP) {
	cout << "Write your name: "; cin >> personP -> name;
	cout << "Write your age: "; cin >> personP -> age;
	cout << endl;
}

void printData(Person* personP) {
	cout << "Name: " << personP -> name << endl;
	cout << "Age: " << personP -> age << endl;
}
