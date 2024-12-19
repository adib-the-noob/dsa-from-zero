#include <iostream>
using namespace std;

void doSomething(int num){
    // add 5 with the provided number
    cout << num << endl;
    num += 5;
    cout << "New Value " << num << endl;
}


void doSomethingAnother(string &s){ // &s means there will be no copy rather it will be 
    s[0] = 't';
    cout << s << endl;
};

int main()
{
    // int number = 0;
    // cout << "Current Value is: " << number;
    // cin >> number;
    // doSomething(number);
    // cout << number;

    string s = "raj";
    cout << s << endl;
    doSomethingAnother(s);
}