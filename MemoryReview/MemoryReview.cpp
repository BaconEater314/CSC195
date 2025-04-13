#include <iostream>
using namespace std;
struct Person{
	char name[32];
	int id;
};

int MakeSpace() {
	cout << "" << endl;
	return 0;
}

int Square(int& i) {
	i = i * i;
	cout << i << endl;
	return 0;
}

int Double(int& i) {
	i = i * 2;
	return 0;
}

int main(){
	// ** REFERENCE **
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	// output the int variable
	// set the int reference to some number
	// output the int variable
	// what happened to the int variable when the reference was changed? It changed the number of i from 5 to 6
	// output the address of the int variable
	// output the address of the int reference
	// are the addresses the same or different? There was no difference.
	
	int i = 5;
	int& pointer = i;
	cout << i << endl;
	pointer = 6;
	cout << i << endl;
	MakeSpace();
	cout << &i << endl;
	cout << &pointer << endl;
	MakeSpace();

	// ** REFERENCE PARAMETER **
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	// output the int variable to the console
	Square(pointer);
	cout << i << endl;
	MakeSpace();
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	// 
	// 
	// ** POINTER VARIABLE **
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* p = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	p = &pointer;
	// output the value of the pointer
	cout << p << endl;
	// what is this address that the pointer is pointing to? The address of the pointer
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << pointer << endl;
	MakeSpace();
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);
	// output the dereference pointer
	cout << pointer << endl;
	// output the int variable created in the REFERENCE section
	cout << i << endl;
	// did the int variable's value change when using the pointer? Yes
}