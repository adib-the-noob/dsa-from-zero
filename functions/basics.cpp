#include <iostream>
using namespace std;

// void is something that don't return anything.

void greetPeerson(string name){
	cout << "Hello, " << name << endl;
}

int calculateTotal(int number1, int number2){
	return number1 + number2;
}

int maxValue(int number1, int number2){
	if(number1 > number2){
		return number1;
	}
	else{
		return number2;
	}
}


int main(){
	string name;
	cin >> name;
	greetPeerson(name);

	int number1, number2;

	cin >> number1;
	cin >> number2;

	int result = calculateTotal(number1, number2);
	cout << "Result is: " << result << endl;
	
	return 0;
}