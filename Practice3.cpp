#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstname;
  string lastname;
  Person();
  Person (string Fn, string Ln);
};
Person::Person(){
  firstname = "Unknown";
  lastname = "Unknown";
}
Person::Person(string Fn,string Ln){
  firstname = Fn;
  lastname = Ln;
}




int main() {
	// Create two instances of person here, and assign the names.

Person a;
cout << "First name: " << a.firstname << ". Last name: " << a.lastname << endl;
a.firstname = "Dorian";
a.lastname = "Gray";



Person b("Linus", "Van Pelt");
cout << "First name: " << b.firstname << ". Last name: " << b.lastname << endl;
b.firstname = "Charlie";
b.lastname = "Brown";



cout << "First name: " << a.firstname << ". Last name: " << a.lastname << endl;
cout << "First name: " << b.firstname << ". Last name: " << b.lastname << endl;


	// Add the prints here




	return 0;
}
