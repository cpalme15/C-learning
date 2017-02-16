#include <iostream>
#include <cstdlib> 
#include <string>
#include <fstream>


using namespace std;

int main()
{

	
	char str[40];
	struct character {
		string weapon;
		int strength;
		int health;
	};
	ofstream os("file.txt");
	os << "I learned how to do a thing";
	os.close();
	ifstream is("file.txt");
	is.getline(str,40);
	is.close();
	character phil;
	phil.health = 25;
	phil.weapon = "Dagger";
	phil.strength = 30;
	int num;
	cout << "Look Ma I did it\n boom!";
	int a = 1;
	int *p;
	p = &a;
	cin >> num;
	cin.ignore();
	if (num == 2) {
		cout << "Thats weird" << " I thought you would pick 1";
		a = 3;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "blah ";
	}
	switch (a) {
	case 1: cout << " hi";
		break;
	case 3: cout << " hey";
	}
	cout << " "<<phil.health <<" "<< phil.strength<<" "<<phil.weapon;

	cout << "\n"<<str;
	cin.get();
	
}