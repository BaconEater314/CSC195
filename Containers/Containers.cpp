#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>

using namespace std;


int main() {

	// array
	array<string,7> arr = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	cout << " " << endl;
	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	vec.push_back(7);
	vec.pop_back();

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	cout << " " << endl;
	//list
	list<string> lst = {"Apple", "Banana", "Orange"};
	lst.insert(lst.begin(), "Strawberry");
	lst.insert(lst.end(), "Blueberry");
	lst.remove("Orange");

	for (auto iter = lst.begin(); iter != lst.end(); iter++) {
		cout << *iter << endl;
	}

	cout << " " << endl;
	//map
	map<string, int> m;
	m["apples"] = 10;
	m["bananas"] = 5;
	
	m["oranges"] = 10;
	m["strawberries"] = 15;
	m["blueberries"] = 20;

	for (const auto& pair : m) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}

	//stack
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();

	return 0;
 }